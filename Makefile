# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 11:42:12 by thoberth          #+#    #+#              #
#    Updated: 2021/04/06 10:45:44 by thoberth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_CHECKER = $(wildcard checker_repo/*.c)

SRCS_PUSH_SWAP = $(wildcard push_swap_repo/*.c)

SRCS_COMMOM = $(wildcard common_cmd/*.c)

OBJS_CHECKER = ${SRCS_CHECKER:.c=.o}

OBJS_PUSH_SWAP = ${SRCS_PUSH_SWAP:.c=.o}

OBJS_COMMON = ${SRCS_COMMOM:.c=.o}

MAIN_CHECKER = main/checker.c

MAIN_PUSH_SWAP = main/push_swap.c

LIBFTPATH = Libft

NAME_LIBFT = Libft.a

CC = gcc

NAME = push_swap.a

CFLAGS = -Wall -Wextra -Werror

EXEC_CHECKER = checker

EXEC_PUSH_SWAP = push_swap

HDR = push_swap.h

RM = rm -f

ARRC = ar rcs ${NAME}

all : ${EXEC_CHECKER} ${EXEC_PUSH_SWAP}

${EXEC_CHECKER} : ${NAME} ${NAME_LIBFT}
	${CC} -o $@ $^ ${MAIN_CHECKER}

${EXEC_PUSH_SWAP} : ${NAME} ${NAME_LIBFT}
	${CC} -o $@ $^ ${MAIN_PUSH_SWAP}

${NAME} : ${OBJS_CHECKER} ${OBJS_COMMON} ${OBJS_PUSH_SWAP}
	${ARRC} $^

${NAME_LIBFT} :
	cd ${LIBFTPATH} ; make ; cp ${NAME_LIBFT} ../ ; cd ..

%.o : %.c
	${CC} ${CFLAGS} -c $^ -o $@ -I ${HDR}

clean :
	${RM} ${OBJS_CHECKER} ${OBJS_COMMON} ${OBJS_PUSH_SWAP} ; cd ${LIBFTPATH} ; make fclean ; cd ../

fclean: clean
	${RM} ${NAME} ${NAME_LIBFT} ${EXEC_PUSH_SWAP} ${EXEC_CHECKER}

re: fclean all

.PHONY : all clean fclean re