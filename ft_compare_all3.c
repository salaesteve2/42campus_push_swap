/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_all3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:40:47 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/12 23:13:33 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_comprobarpaso(t_stack *a, t_stack *b, int *y, int nb)
{
	int	nb2;

	nb2 = ft_mayorb(b, y);
	if (b->array[0] < nb)
	{
		if (b->size <= y[1] / 2)
		{
			while (b->array[0] != nb2)
			{
				ft_rotate(a, b, y, 1);
			}
		}
		else
		{
			while (b->array[0] != nb2)
			{
				ft_reverse_rotate(a, b, y, 1);
			}
		}
	}
	ft_direccion(a, b, y, nb);
}

void	ft_numeros(t_stack *a, t_stack *b, int *y, int start)
{
	int	x;
	int	nb;

	x = 0;
	while (x < y[0])
	{
		if (a->array[x] >= start && a->array[x] < start + 90)
		{
			nb = a->array[x];
			a->size = x;
			ft_comprobarpaso(a, b, y, nb);
			x = 0;
		}
		x++;
	}
}

void	ft_compare_all3(t_stack *a, t_stack *b, int *y)
{
	int	z;
	int	nb;

	z = 0;
	while (y[0] != 0)
	{
		ft_numeros(a, b, y, z);
		z += 54;
	}
	while (y[1] != 0)
	{
		nb = ft_mayorb(b, y);
		ft_pasarb(a, b, y, nb);
	}
}
