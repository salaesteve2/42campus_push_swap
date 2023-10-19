/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:13:54 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/13 17:10:30 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atoi2(int long numberint, int x)
{
	if (numberint > 2147483648)
	{
		write(1, "Error\n", 6);
		exit(-1);
	}
	if (x == 1)
		numberint = numberint * -1;
	return (numberint);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			x;
	int long	numberint;

	i = 0;
	x = 0;
	numberint = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		x = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			break ;
		else
			numberint = (str[i] - '0') + numberint * 10;
		i++;
	}
	return (ft_atoi2(numberint, x));
}

int	ft_convertir2(char **argv, int sign, int *x, int *nb)
{
	while (argv[1][x[0]])
	{
		if (argv[1][x[0]] == ' ')
			x[0]++;
		if (argv[1][x[0]] == '-')
		{
			x[0]++;
			sign = 1;
		}
		if (argv[1][x[0]] != ' ')
		{
			while (argv[1][x[0]] && argv[1][x[0]] != ' ')
				nb[x[1]] = (argv[1][x[0]++] - '0') + nb[x[1]] * 10;
			if (sign == 1)
			{
				sign = 0;
				nb[x[1]] = nb[x[1]] * -1;
			}
			x[1]++;
		}
		if (argv[1][x[0]] == '\0')
			break ;
		x[0]++;
	}
	return (x[1]);
}

int	*ft_convertir(char **argv, int *y)
{
	int	x[2];
	int	*nb;
	int	sign;

	x[0] = 0;
	x[1] = 0;
	sign = 0;
	nb = malloc(sizeof(int) * 1024);
	y[0] = ft_convertir2(argv, sign, x, nb);
	return (nb);
}

int	sizenumbers(int n)
{
	int	x;

	x = 0;
	while (x < n)
		x++;
	return (x);
}
