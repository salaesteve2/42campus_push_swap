/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:49:57 by salustianos       #+#    #+#             */
/*   Updated: 2022/05/16 13:56:33 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reinicializar(int *x, int *nb)
{
	*x = 0;
	*nb = 0;
}

void	ft_fill_stacks(t_stack *a, int *nb, int *y)
{
	int	x;

	x = 0;
	while (x < y[0])
	{
		a->array[x] = nb[x];
		x++;
	}
}

int	ft_numerar2(t_stack *a, int *y)
{
	int	z;

	z = 0;
	while (z < y[0])
	{
		if (a->array[z] > a->array[z + 1] && z + 1 != y[0])
			return (-1);
		z++;
	}
	return (0);
}

void	ft_stacks(int *nb, int *y)
{
	t_stack	a;
	t_stack	b;
	t_stack	c;

	a.array = malloc(sizeof(int) * y[0]);
	b.array = malloc(sizeof(int) * y[0]);
	c.array = malloc(sizeof(int) * y[0]);
	ft_fill_stacks(&a, nb, y);
	a.max = 1;
	a.number = 0;
	y[1] = 0;
	y[2] = y[0];
	if (y[0] >= 100 && y[0] <= 500)
		ft_transformar(&a, &b, &c, y);
	if (y[0] < 100)
		ft_compare(&a, &b, y);
	free(a.array);
	free(b.array);
	free(c.array);
}

int	main(int argc, char *argv[])
{
	int	y[7];
	int	*copia_nb;
	int	*swap;

	copia_nb = malloc(argc * sizeof(int));
	if (argc == 1)
		write(1, "\n", 1);
	if (argc == 2)
	{
		ft_errors3(argv, copia_nb);
		swap = copia_nb;
		copia_nb = ft_convertir(argv, y);
		ft_stacks(ft_comprobar_orden(copia_nb, y), y);
		free(swap);
	}
	if (argc > 2)
	{
		swap = copia_nb;
		copia_nb = ft_atoi_conversion(argv, y, argc);
		ft_errors1(argv, copia_nb, y);
		ft_stacks(ft_comprobar_orden(copia_nb, y), y);
		free(swap);
	}
	free(copia_nb);
	return (0);
}
