/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 14:06:47 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/17 16:31:23 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_compare2(t_stack *a, t_stack *b)
{
	ft_swap(a, b, 0);
}

int	ft_numerar(t_stack *a, int x, int *y)
{
	int	z;

	z = 0;
	while (z < y[0])
	{
		if (a->array[z] > a->array[z + 1] && z + 1 != y[0])
			return (-1);
		z++;
	}
	return (x);
}

void	ft_compare3(t_stack *a, t_stack *b, int *y)
{
	int	x;

	x = 0;
	while (x < y[0])
	{
		if (a->array[0] > a->array[1])
			ft_swap(a, b, 0);
		if (a->array[1] > a->array[2])
			ft_reverse_rotate(a, b, y, 0);
		x++;
	}
}

void	ft_compare4(t_stack *a, t_stack *b, int *y)
{
	int	x;

	x = 0;
	while (x < y[0])
	{
		if (a->array[0] > a->array[1])
			ft_swap(a, b, 0);
		else if (a->array[1] > a->array[2] && a->array[1] > a->array[3])
			ft_reverse_rotate(a, b, y, 0);
		else if (a->array[1] > a->array[2] && a->array[1] < a->array[3])
			ft_rotate(a, b, y, 0);
		else if (a->array[3] < a->array[2])
			ft_reverse_rotate(a, b, y, 0);
		x = ft_numerar(a, x, y);
		x++;
	}
}

void	ft_compare(t_stack *a, t_stack *b, int *y)
{
	if (y[0] == 2)
		ft_compare2(a, b);
	else if (y[0] == 3)
		ft_compare3(a, b, y);
	else if (y[0] == 4)
		ft_compare4(a, b, y);
	else if ((y[0] > 4 && y[0] < 100) || y[0] > 500)
		ft_compare_all(a, b, y);
	else if (y[0] == 100)
		ft_compare_all2(a, b, y);
	else if (y[0] > 100 && y[0] <= 500)
		ft_compare_all3(a, b, y);
}
