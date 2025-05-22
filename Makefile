# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isadbaib <isadbaib@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/02 22:46:17 by isadbaib          #+#    #+#              #
#    Updated: 2025/05/22 20:40:38 by isadbaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	src/message/ft_message.c \
     	src/check/ft_check.c \
     	src/check/ft_isdigit.c \
     	src/string/ft_strlen.c \
     	src/conversion/ft_atoi.c \
	src/conversion/ft_conversion.c \
	src/memory/ft_bzero.c \
	src/memory/ft_calloc.c \
	src/init.c \
	src/philosophers.c
CCn = cc
NAME = philo
RM = rm
FLAGS = -Wall -Wextra -Werror -pthread -g3
OBJ = ${SRC:.c=.o}
all : $(OBJ) $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS) 

%.o : %.c
	$(CC) -c $< $(FLAGS) -o $@

clean : 
	$(RM) -f $(OBJ)
       	
fclean : clean
       	
re : fclean all

.PHONY: NAME, all, clean, fclean, re
