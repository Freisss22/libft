# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cafreire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/25 19:26:27 by cafreire          #+#    #+#              #
#    Updated: 2023/10/25 19:39:26 by cafreire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
FILES = lib1.c lib2.c libft.h
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(FILES)
	cc $(FLAGS) $(FILES) -o $(NAME)
all : $(NAME)
clean :
	rm -f *.o
re : fclean all
