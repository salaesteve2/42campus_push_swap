/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:49:30 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/09 17:32:47 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_menor(t_stack *a, int *y)
{
	int	x;
	int	nb;

	x = 0;
	nb = a->array[x];
	while (x < y[0])
	{
		if (a->array[x] < nb)
		{
			nb = a->array[x];
			a->size = x;
		}
		x++;
	}
	return (nb);
}

void	ft_pasar(t_stack *a, t_stack *b, int *y, int nb)
{
	if (a->size <= y[0] / 2)
	{
		while (a->array[0] != nb)
		{
			ft_rotate(a, b, y, 0);
		}
		ft_push(a, b, y, 0);
	}
	else
	{
		while (a->array[0] != nb)
		{
			ft_reverse_rotate(a, b, y, 0);
		}
		ft_push(a, b, y, 0);
	}
}

void	ft_compare_all(t_stack *a, t_stack *b, int *y)
{
	int	x;
	int	nb;

	x = 0;
	while (x < y[2] - 2)
	{
		nb = ft_menor(a, y);
		ft_pasar(a, b, y, nb);
		x++;
	}
	if (a->array[0] > a->array[1])
		ft_swap(a, b, 0);
	x = 0;
	while (x < y[2] - 2)
	{
		ft_push(a, b, y, 1);
		x++;
	}
}
