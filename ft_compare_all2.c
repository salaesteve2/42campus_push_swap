/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compare_all2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:12:14 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/19 10:11:23 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_numeros2(t_stack *a, t_stack *b, int *y)
{
	int	x;
	int	nb;

	x = 0;
	while (x < y[0])
	{
		if (a->array[x] >= y[3] && a->array[x] < y[4])
		{
			nb = a->array[x];
			a->size = x;
			ft_comprobarpaso(a, b, y, nb);
			x = 0;
		}
		x++;
	}
	y[3] += y[5];
	y[4] = y[3] + y[6];
}

void	ft_numberbigger900(t_stack *a, t_stack *b, t_stack *d, int *y)
{
	int	x;
	int	nb;

	ft_processnumbers(y);
	a->max = 1;
	x = 0;
	while (x < 100)
	{
		a->array[x] = d->array[x];
		b->array[x] = 0;
		x++;
	}
	while (y[0] != 0)
		ft_numeros2(a, b, y);
	while (y[1] != 0)
	{
		nb = ft_mayorb(b, y);
		ft_pasarb(a, b, y, nb);
	}
}

void	ft_number900(t_stack *a, t_stack *b, t_stack *d, int *y)
{
	int	x;

	x = 0;
	while (x < 100)
	{
		a->array[x] = d->array[x];
		b->array[x] = 0;
		x++;
	}
	if (y[6] <= 101)
		y[6] += 2;
	ft_processnumbers(y);
	if (y[6] >= 101)
	{
		y[5] += 10;
		y[6] = y[5];
	}
	if (y[6] < 101 && y[5] < 101)
		ft_pruebas(a, b, d, y);
	else
	{
		y[5] = 15;
		y[6] = 15;
		ft_numberbigger900(a, b, d, y);
	}
}

void	ft_pruebas(t_stack *a, t_stack *b, t_stack *d, int *y)
{
	int	nb;

	a->max = 0;
	while (y[0] != 0)
		ft_numeros2(a, b, y);
	while (y[1] != 0)
	{
		nb = ft_mayorb(b, y);
		ft_pasarb(a, b, y, nb);
	}
	if (a->number >= 900)
	{
		a->number = 0;
		ft_number900(a, b, d, y);
	}
	else
		ft_numberbigger900(a, b, d, y);
}

void	ft_compare_all2(t_stack *a, t_stack *b, int *y)
{
	t_stack	d;
	int		x;

	d.array = malloc(sizeof(int) * y[2]);
	x = 0;
	while (x < 100)
	{
		d.array[x] = a->array[x];
		x++;
	}
	y[5] = 10;
	y[6] = 10;
	ft_processnumbers(y);
	ft_pruebas(a, b, &d, y);
	free(d.array);
}
