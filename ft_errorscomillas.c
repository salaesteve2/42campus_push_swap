/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorscomillas.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:43:51 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/16 13:59:55 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_comillas(char *argv)
{
	int	x;
	int	comillas;

	x = 0;
	comillas = 0;
	while (argv[x])
	{
		if (argv[x] == ' ')
			comillas = 1;
		x++;
	}
	return (comillas);
}

int	*ft_convertir4(char *argv, int sign, int *x, int *nb)
{
	while (argv[x[0]])
	{
		if (argv[x[0]] == ' ')
			x[0]++;
		if (argv[x[0]] == '-')
		{
			x[0]++;
			sign = 1;
		}
		if (argv[x[0]] != ' ')
		{
			nb[x[1]] = 0;
			while (argv[x[0]] && argv[x[0]] != ' ')
				nb[x[1]] = (argv[x[0]++] - '0') + nb[x[1]] * 10;
			if (sign == 1)
				nb[x[1]] = nb[x[1]] * -1;
			sign = 0;
			x[1]++;
		}
		if (argv[x[0]] == '\0')
			break ;
		x[0]++;
	}
	return (nb);
}

int	*ft_convertir3(char *argv, int *nb)
{
	int	x[2];
	int	sign;

	x[0] = 0;
	x[1] = 0;
	sign = 0;
	return (ft_convertir4(argv, sign, x, nb));
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	*ft_ponercomillas(char *argv, int *y, int *nb)
{
	int	*h;
	int	x;
	int	j;

	h = malloc(sizeof(int) * (ft_digits(argv) + 1));
	h = ft_convertir3(argv, h);
	x = sizenumbers(y[0]);
	j = 0;
	while (x < sizenumbers(y[0]) + ft_digits(argv))
		nb[x++] = h[j++];
	nb[x] = '\0';
	y[0] += ft_digits(argv);
	free(h);
	return (nb);
}
