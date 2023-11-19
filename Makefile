# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohertzbe <ohertzbe@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/15 18:23:24 by ohertzbe          #+#    #+#              #
#    Updated: 2023/11/16 17:25:08 by ohertzbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = printhex.c ft_printf.c count_num.c printint.c printptr.c\
	printstr.c printuint.c count_hex.c

OBJS = $(SRCS:.c=.o)

INCL = ft_printf.h

all:	$(LIBFT) $(NAME)

$(NAME):	$(LIBFT) $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C ./libft

clean:
	rm -f $(OBJS)
	make -C ./libft clean

fclean:	clean
	rm -f $(NAME)
	make -C ./libft fclean

re:	fclean	all

.PHONY: all re clean fclean
