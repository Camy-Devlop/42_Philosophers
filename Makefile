# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 22:46:17 by isadbaib          #+#    #+#              #
#    Updated: 2025/04/02 22:54:52 by isadbaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=
CC=cc
NAME = philo
RM = rm
FLAGS = -Wall -Wextra -Werror -g3
OBJ=${SRC:.c=.o}

all: $(NAME) $(OBJ)

clean:
       	
fclean: clean
       	
re: flcean all

.PHONY: NAME, all, clean, fclean, re
