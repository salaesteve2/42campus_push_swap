/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:05:11 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/16 13:49:20 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *a, t_stack *b, int x)
{
	a->number++;
	if (x == 0)
		ft_swapa(a);
	if (x == 1)
		ft_swapb(a, b);
	if (x == 2)
		ft_swapab(a, b);
}

void	ft_push(t_stack *a, t_stack *b, int *y, int x)
{
	a->number++;
	if (x == 0 && y[0] != 0)
		ft_pusha(a, b, y);
	if (x == 1 && y[1] != 0)
		ft_pushb(a, b, y);
}

void	ft_rotate(t_stack *a, t_stack *b, int *y, int x)
{
	a->number++;
	if (x == 0 && y[0] != 0)
		ft_rotatea(a, y);
	if (x == 1 && y[1] != 0)
		ft_rotateb(a, b, y);
	if (x == 2 && y[0] != 0 && y[1] != 0)
		ft_rotateab(a, b, y);
}

void	ft_reverse_rotate(t_stack *a, t_stack *b, int *y, int x)
{
	a->number++;
	if (x == 0 && y[0] != 0)
		ft_reverse_rotatea(a, y);
	if (x == 1 && y[1] != 0)
		ft_reverse_rotateb(a, b, y);
	if (x == 2 && y[0] != 0 && y[1] != 0)
		ft_reverse_rotateab(a, b, y);
}

int	ft_number(char **argv)
{
	int	x;
	int	y;
	int	nb;

	x = 1;
	y = 0;
	nb = 0;
	while (argv[x])
	{
		y = 0;
		while (argv[x][y])
		{
			if (argv[x][y] >= '0' && argv[x][y] <= '9')
				nb++;
			y++;
		}
		x++;
	}
	return (nb);
}
