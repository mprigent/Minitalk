# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/05 14:01:37 by mprigent          #+#    #+#              #
#    Updated: 2021/07/06 14:43:25 by mprigent         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = server

NAME2 = client

all :
	make -C libft
	gcc -Wall -Wextra -Werror server.c libft/libft.a -o $(NAME1)
	gcc -Wall -Wextra -Werror client.c libft/libft.a -o $(NAME2)

clean :
	make clean -C libft 
	rm -rf client.o server.o

fclean : clean
	make fclean -C libft
	rm -rf $(NAME1) $(NAME2)

re : fclean all
