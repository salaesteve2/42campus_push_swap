/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functionsa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 10:32:41 by sasalama          #+#    #+#             */
/*   Updated: 2022/04/27 11:35:38 by salustianos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swapa(t_stack *a)
{
	int	temp;

	temp = a->array[1];
	a->array[1] = a->array[0];
	a->array[0] = temp;
	if (a->max == 1)
		printf("sa\n");
}

void	ft_pusha(t_stack *a, t_stack *b, int *y)
{
	int	temp;
	int	h;

	h = 0;
	temp = a->array[0];
	while (h < y[0])
	{
		a->array[h] = a->array[h + 1];
		h++;
	}
	y[0]--;
	y[1]++;
	h = y[1];
	while (h >= 0)
	{
		b->array[h] = b->array[h - 1];
		h--;
	}
	b->array[0] = temp;
	if (a->max == 1)
		printf("pb\n");
}

void	ft_rotatea(t_stack *a, int *y)
{
	int	temp;
	int	h;

	h = 0;
	temp = a->array[h];
	while (h < y[0] - 1)
	{
		a->array[h] = a->array[h + 1];
		h++;
	}
	a->array[h] = temp;
	if (a->max == 1)
		printf("ra\n");
}

void	ft_reverse_rotatea(t_stack *a, int *y)
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
	if (a->max == 1)
		printf("rra\n");
}
