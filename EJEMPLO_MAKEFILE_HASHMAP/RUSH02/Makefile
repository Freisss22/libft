# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danibane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/26 03:30:12 by danibane          #+#    #+#              #
#    Updated: 2023/08/27 21:23:14 by danibane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02
FILES = main.c hashmap.c printer.c aux.c converters.c
FLAGS = -Wall -Wextra -Werror
RM = rm -f

$(NAME) : $(FILES)
	cc $(FLAGS) $(FILES) -o $(NAME)
%.o: %.c ft_hashmap.h
	cc $(FLAGS) -c $< -o $@
all : $(NAME)
clean :
	$(RM) $(wildcard *.o)
fclean :
	$(RM) $(NAME)
re : fclean all
