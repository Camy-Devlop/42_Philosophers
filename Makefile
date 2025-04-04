# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 22:46:17 by isadbaib          #+#    #+#              #
#    Updated: 2025/04/05 04:20:21 by isadbaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	src/message/ft_message.c \
     	src/check/ft_check.c \
	src/pilosophers.c
CC = cc
NAME = philo
RM = rm
FLAGS = -Wall -Wextra -Werror -g3
OBJ = ${SRC:.c=.o}

all : $(OBJ) $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS) 

%.o : %.c
	@$(CC) -c $< $(FLAGS) -o $@

clean : 
	$(RM) $(OBJ)
       	
fclean : clean
       	
re : fclean all

.PHONY: NAME, all, clean, fclean, re
