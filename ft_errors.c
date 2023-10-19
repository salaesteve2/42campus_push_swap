/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:48:39 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/16 13:57:10 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_errors1(char *argv[], int *copia_nb, int *y)
{
	int		x;
	int		h;
	int		z;
	char	*copia;

	x = 1;
	z = 0;
	while (argv[x])
	{
		z = 0;
		h = 0;
		copia = argv[x++];
		while (copia[h])
		{
			if (copia[h] >= '0' && copia[h] <= '9')
				z++;
			if ((copia[h] < '0' || copia[h] > '9') && copia[h] != '-'
				&& copia[h] != ' ')
				ft_message(copia_nb);
			h++;
		}
		if (z > 10)
			ft_message(copia_nb);
	}
	ft_errors2(copia_nb, y);
}

int	*ft_atoi_conversion(char **argv, int *y, int argc)
{
	int	x;
	int	*nb;

	y[0] = 0;
	x = ft_number(argv);
	nb = malloc(sizeof(int) * x);
	x = 1;
	while (x < argc)
	{
		if (ft_comillas(argv[x]) == 1)
			nb = ft_ponercomillas(argv[x], y, nb);
		else
		{
			nb[y[0]] = ft_atoi(argv[x]);
			y[0]++;
		}
		x++;
	}
	return (nb);
}

void	ft_errors2(int *nb, int *y)
{
	int	x;
	int	a;

	x = 0;
	a = 0;
	while (x < y[0])
	{
		if (nb[x] == nb[a] && x != a)
			ft_message(nb);
		if (a < x && x == y[0] - 1)
		{
			a++;
			x = 0;
		}
		x++;
	}
}

int	*ft_comprobar_orden(int *nb, int *y)
{
	int	x;
	int	a;

	x = 0;
	a = 0;
	while (x < y[0])
	{
		if (nb[x] < nb[x + 1])
		{
			a = 0;
		}
		else if (x != y[0] - 1)
		{
			a = 1;
			break ;
		}
		x++;
	}
	if (a == 0)
	{
		free(nb);
		write(1, "\n", 1);
		exit(-1);
	}
	return (nb);
}

void	ft_errors3(char **argv, int *copia_nb)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (argv[1][x])
	{
		if (argv[1][x] == ' ' || argv[1][x] == '-')
		{
			z = 0;
			x++;
		}
		else if (argv[1][x] < '0' || argv[1][x] > '9')
			ft_message(copia_nb);
		if (argv[1][x] >= '0' && argv[1][x] <= '9')
		{
			x++;
			z++;
		}
	}
	if (z > 10)
		ft_message(copia_nb);
}
