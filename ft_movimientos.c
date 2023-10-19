/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_movimientos.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:55:53 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/09 09:54:23 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pasarb(t_stack *a, t_stack *b, int *y, int nb)
{
	if (b->size <= y[1] / 2 && y[1] > 0)
	{
		while (b->array[0] != nb)
		{
			ft_rotate(a, b, y, 1);
		}
		ft_push(a, b, y, 1);
	}
	else if (y[1] > 0)
	{
		while (b->array[0] != nb)
		{
			ft_reverse_rotate(a, b, y, 1);
		}
		ft_push(a, b, y, 1);
	}
}

void	ft_direccionb(t_stack *a, t_stack *b, int *y, int nb)
{
	if (b->size <= y[0])
	{
		while (b->array[0] != nb)
		{
			ft_rotate(a, b, y, 1);
		}
		ft_push(a, b, y, 1);
	}
	else
	{
		while (b->array[0] != nb)
		{
			ft_reverse_rotate(a, b, y, 1);
		}
		ft_push(a, b, y, 1);
	}
}

void	ft_direccion(t_stack *a, t_stack *b, int *y, int nb)
{
	if (a->size <= y[0])
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

void	inicializar(int *x, int *j)
{
	*x = 0;
	*j = 0;
}

void	ft_procesarzero(int sign, t_stack *a, int *y)
{
	if (sign == 1)
		ft_cambiarzero(a, y);
}
