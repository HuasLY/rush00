# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hly <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/11 12:40:45 by hly               #+#    #+#              #
#    Updated: 2015/01/11 21:19:19 by oberrada         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

CC = g++
FLAGS = -Wall -Werror -Wextra
LFLAGS = -lncurses

SRC = Entity.class.cpp\
	  Player.class.cpp\
	  Enemy.class.cpp\
	  Projectile.class.cpp\
	  ft_retro_list.cpp\
	  Etoile.class.cpp\
	  main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@($(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LFLAGS))
	@echo "\033[32m\"$(NAME)\" created !\033[0m"

%.o: %.cpp
	@echo "$@ created"
	@($(CC) -c $(CFLAGS) -o $@ $^)

clean:
	@(rm -f $(OBJ))
	@echo "\033[31m$(NAME)'s object files deleted\033[0m"

fclean: clean
	@(rm -f $(NAME))
	@echo "\033[31m\"$(NAME)\" deleted\033[0m"

re: fclean all

.PHONY: re fclean clean all
