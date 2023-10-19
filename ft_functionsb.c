/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functionsb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:32:41 by sasalama          #+#    #+#             */
/*   Updated: 2022/04/27 11:33:48 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapb(t_stack *a, t_stack *b)
{
	int	temp;

	temp = b->array[1];
	b->array[1] = b->array[0];
	b->array[0] = temp;
	if (a->max == 1)
		printf("sb\n");
}

void	ft_pushb(t_stack *a, t_stack *b, int *y)
{
	int	h;
	int	temp;

	h = 0;
	temp = b->array[0];
	while (h < y[1])
	{
		b->array[h] = b->array[h + 1];
		h++;
	}
	y[1]--;
	y[0]++;
	h = y[0];
	while (h >= 0)
	{
		a->array[h] = a->array[h - 1];
		h--;
	}
	a->array[0] = temp;
	if (a->max == 1)
		printf("pa\n");
}

void	ft_rotateb(t_stack *a, t_stack *b, int *y)
{
	int	h;
	int	temp;

	h = 0;
	temp = b->array[h];
	while (h < y[1] - 1)
	{
		b->array[h] = b->array[h + 1];
		h++;
	}
	b->array[h] = temp;
	if (a->max == 1)
		printf("rb\n");
}

void	ft_reverse_rotateb(t_stack *a, t_stack *b, int *y)
{
	int	h;
	int	temp;

	h = y[1] - 1;
	temp = b->array[h];
	while (h >= 0)
	{
		b->array[h] = b->array[h - 1];
		h--;
	}
	b->array[h + 1] = temp;
	if (a->max == 1)
		printf("rrb\n");
}
