# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salustianosalamanca <salustianosalamanc    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 11:12:13 by salustianos       #+#    #+#              #
#    Updated: 2022/05/17 09:56:00 by salustianos      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c ft_compare_all.c ft_compare_all2.c ft_compare_all3.c ft_compare.c ft_errors.c ft_functions.c ft_functionsa.c ft_functionsab.c \
		ft_functionsb.c ft_movimientos.c ft_transformar.c push_swap.c biggerorsmaller.c ft_errorscomillas.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

CC = gcc 

FLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o: %.c
			@${CC} ${FLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${NAME}

all: ${NAME}

clean: 
		${RM} ${OBJS}

fclean: clean 
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re