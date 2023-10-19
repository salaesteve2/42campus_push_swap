/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggerorsmaller.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:04:43 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/16 10:57:30 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_menorb(t_stack *b, int *y)
{
	int	x;
	int	nb;

	x = 0;
	nb = b->array[x];
	while (x < y[1])
	{
		if (b->array[x] < nb)
		{
			nb = b->array[x];
			b->size = x;
		}
		x++;
	}
	return (nb);
}

int	ft_mayorb(t_stack *b, int *y)
{
	int	x;
	int	nb;

	x = 0;
	nb = b->array[x];
	while (x < y[1])
	{
		if (b->array[x] > nb)
		{
			nb = b->array[x];
			b->size = x;
		}
		x++;
	}
	return (nb);
}

void	ft_processnumbers(int *y)
{
	y[3] = 0;
	y[4] = y[3] + y[6];
}

int	ft_digits(char *argv)
{
	int	z;
	int	j;

	z = 0;
	j = 0;
	while (argv[z])
	{
		if ((argv[z] >= '0' && argv[z] <= '9')
			&& (argv[z + 1] < '0' || argv[z + 1] > '9'))
			j++;
		z++;
	}
	return (j);
}

void	ft_message(int *n)
{
	free(n);
	write(1, "Error\n", 6);
	exit(-1);
}
