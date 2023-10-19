/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functionsab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:32:41 by sasalama          #+#    #+#             */
/*   Updated: 2022/04/27 11:33:26 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapab(t_stack *a, t_stack *b)
{
	int	temp;

	temp = a->array[1];
	a->array[1] = a->array[0];
	a->array[0] = temp;
	temp = b->array[1];
	b->array[1] = b->array[0];
	b->array[0] = temp;
	if (a->max == 1)
		printf("ss\n");
}

void	ft_rotateab(t_stack *a, t_stack *b, int *y)
{
	int	h;
	int	temp;

	h = 0;
	temp = a->array[h];
	while (h < y[0] - 1)
	{
		a->array[h] = a->array[h + 1];
		h++;
	}
	a->array[h] = temp;
	h = 0;
	temp = b->array[h];
	while (h < y[1] - 1)
	{
		b->array[h] = b->array[h + 1];
		h++;
	}
	b->array[h] = temp;
	if (a->max == 1)
		printf("rr\n");
}

void	ft_reverse_rotateab(t_stack *a, t_stack *b, int *y)
{
	int	h;
	int	temp;

	h = y[0] - 1;
	temp = a->array[h];
	while (h >= 0)
	{
		a->array[h] = a->array[h - 1];
		h--;
	}
	a->array[h + 1] = temp;
	h = y[1] - 1;
	temp = b->array[h];
	while (h >= 0)
	{
		b->array[h] = b->array[h - 1];
		h--;
	}
	b->array[h + 1] = temp;
	if (a->max == 1)
		printf("rrr\n");
}
