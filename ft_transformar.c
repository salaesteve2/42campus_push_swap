/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_transformar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:11:20 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/16 14:07:02 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_menorc(t_stack *c, int *y)
{
	int	x;
	int	nb;

	x = 0;
	nb = c->array[x];
	c->size = x;
	while (nb == 0)
	{
		nb = c->array[x];
		c->size = x;
		x++;
	}
	while (x < y[0])
	{
		if (c->array[x] < nb && c->array[x] != 0)
		{
			nb = c->array[x];
			c->size = x;
		}
		x++;
	}
}

void	ft_transformar2(t_stack *a, t_stack *c, int *y, int *h)
{
	int	x;
	int	z;

	x = 0;
	z = 0;
	while (x < y[0])
	{
		if (h[x] == a->array[z])
		{
			a->array[z] = c->array[x];
			z++;
			x = -1;
		}
		if (x + 1 == y[0] && z < y[0])
		{
			x = -1;
			z++;
		}
		x++;
	}
}

int	ft_verzero(t_stack *a, int *y)
{
	int	x;
	int	sign;

	x = 0;
	sign = 0;
	while (x < y[0])
	{
		if (a->array[x] == 0)
		{
			a->array[x] = 1;
			sign = 1;
		}
		x++;
	}
	return (sign);
}

void	ft_cambiarzero(t_stack *a, int *y)
{
	int	x;

	x = 0;
	while (x < y[0])
	{
		if (a->array[x] == 1)
		{
			a->array[x] = 0;
			break ;
		}
		x++;
	}
}

void	ft_transformar(t_stack *a, t_stack *b, t_stack *c, int *y)
{
	int	x;
	int	j;
	int	h[1024];
	int	sign;

	inicializar(&x, &j);
	sign = ft_verzero(a, y);
	while (x < y[0])
		c->array[j++] = a->array[x++];
	x = 0;
	while (x < y[0])
	{
		ft_menorc(c, y);
		c->array[c->size] = 0;
		h[c->size] = x++;
	}
	inicializar(&x, &j);
	while (x < y[0])
		c->array[j++] = a->array[x++];
	inicializar(&x, &j);
	while (x < y[0])
		a->array[j++] = h[x++];
	ft_compare(a, b, y);
	ft_transformar2(a, c, y, h);
	ft_procesarzero(sign, a, y);
}
