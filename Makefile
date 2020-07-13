# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fassani <fassani@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/15 04:00:06 by fassani           #+#    #+#              #
#    Updated: 2020/07/13 10:27:23 by fassani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS	= \
./parse.c\
./parse_step.c\
./show_i.c\
./show_i_step.c\
./show_i_step2.c\
./show_u.c\
./show_u_step.c\
./ft_atoi.c\
./ft_isdigit.c\
./ft_printf.c\
./ft_putchar_fd.c\
./ft_putnbr_fd.c\
./ft_putstr_fd.c\
./ft_putunsignednbr_fd.c\
./ft_strchr.c\
./ft_strlen.c\
./ft_substr.c\
./ft_strdup.c\
./read_array.c\
./show_c.c\
./show_p.c\
./show_s.c\
./show_x.c\
./show_x_step.c\
./unsignednbr_tobase.c
OBJS	= ${SRCS:.c=.o}
INCS	= ft_printf.h
LIBR	= ranlib
RM		= rm -f
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME}: ${OBJS}
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm :
	norminette -R CheckForbiddenSourceHeader */*.[ch]

.PHONY: all clean fclean re .c.o norm
