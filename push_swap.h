/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama <sasalama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:42:22 by sasalama          #+#    #+#             */
/*   Updated: 2022/05/16 13:49:29 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct t_stack
{
	int	*array;
	int	size;
	int	max;
	int	number;
}	t_stack;

int		ft_atoi(const char *str);
int		*ft_comprobar_orden(int *nb, int *y);
void	ft_errors2(int *nb, int *y);
int		*ft_atoi_conversion(char **argv, int *y, int argc);
void	ft_errors1(char *argv[], int *copia_nb, int *y);
void	ft_compare(t_stack *a, t_stack *b, int *y);
void	ft_push(t_stack *a, t_stack *b, int *y, int x);
void	ft_swap(t_stack *a, t_stack *b, int x);
void	ft_rotate(t_stack *a, t_stack *b, int *y, int x);
void	ft_reverse_rotate(t_stack *a, t_stack *b, int *y, int x);
int		ft_numerar(t_stack *a, int x, int *y);
void	ft_compare_all2(t_stack *a, t_stack *b, int *y);
int		ft_menor(t_stack *a, int *y);
void	ft_pasar(t_stack *a, t_stack *b, int *y, int nb);
int		ft_mayor(t_stack *a, int *y);
void	ft_compare_all(t_stack *a, t_stack *b, int *y);
void	ft_ordenar(t_stack *a, t_stack *b, int *y, int h);
void	ft_direccion(t_stack *a, t_stack *b, int *y, int nb);
void	ft_procesar(t_stack *a, t_stack *b, int *y);
void	ft_pasarb(t_stack *a, t_stack *b, int *y, int nb);
int		ft_mayorb(t_stack *b, int *y);
int		ft_menorb(t_stack *b, int *y);
void	ft_compare_all3(t_stack *a, t_stack *b, int *y);
void	ft_errors3(char *argv[], int *copia_nb);
int		*ft_convertir(char **argv, int *y);
void	ft_compare4(t_stack *a, t_stack *b, int *y);
void	ft_procesar2(t_stack *a, t_stack *b, int *y);
void	ft_reinicializar(int *x, int *nb);
void	ft_swapa(t_stack *a);
void	ft_pusha(t_stack *a, t_stack *b, int *y);
void	ft_rotatea(t_stack *a, int *y);
void	ft_reverse_rotatea(t_stack *a, int *y);
void	ft_swapab(t_stack *a, t_stack *b);
void	ft_rotateab(t_stack *a, t_stack *b, int *y);
void	ft_reverse_rotateab(t_stack *a, t_stack *b, int *y);
void	ft_swapb(t_stack *a, t_stack *b);
void	ft_pushb(t_stack *a, t_stack *b, int *y);
void	ft_rotateb(t_stack *a, t_stack *b, int *y);
void	ft_reverse_rotateb(t_stack *a, t_stack *b, int *y);
void	ft_transformar(t_stack *a, t_stack *b, t_stack *c, int *y);
void	ft_direccionb(t_stack *a, t_stack *b, int *y, int nb);
void	ft_comprobarpaso(t_stack *a, t_stack *b, int *y, int nb);
void	ft_pruebas(t_stack *a, t_stack *b, t_stack *d, int *y);
void	ft_numeros2(t_stack *a, t_stack *b, int *y);
void	inicializar(int *x, int *j);
void	ft_cambiarzero(t_stack *a, int *y);
void	ft_procesarzero(int sign, t_stack *a, int *y);
void	ft_processnumbers(int *y);
int		*ft_convertir3(char *argv, int *nb);
int		*ft_convertir4(char *argv, int sign, int *x, int *nb);
int		ft_comillas(char *argv);
int		*ft_ponercomillas(char *argv, int *y, int *nb);
void	ft_numeros2(t_stack *a, t_stack *b, int *y);
void	ft_pruebas2(t_stack *a, t_stack *b, t_stack *d, int *y);
int		sizenumbers(int n);
int		ft_digits(char *argv);
int		ft_strlen(const char *s);
void	ft_message(int *n);
int		ft_number(char **argv);

#endif