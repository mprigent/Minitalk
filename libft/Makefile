# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprigent <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 18:01:03 by mprigent          #+#    #+#              #
#    Updated: 2021/07/06 15:01:15 by mprigent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_strlen.c\
				ft_atoi.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putnbr.c\
				ft_putchar.c\
				ft_putstr.c\
				ft_putnbr_fd.c

OBJS		= 	$(SRCS:.c=.o)

HEADER		=	libft.h

.c.o		:	
				$(CC) -c $(CFLAGS) $^

CC			=	clang

CFLAGS		=	-Wall -Werror -Wextra

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				ar rc $(NAME) $(OBJS) $(HEADER)

clean		:
				rm -f $(OBJS)

fclean		:	clean
				rm -f $(NAME)

re			:	fclean all

