# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 03:32:20 by fadwa             #+#    #+#              #
#    Updated: 2022/07/18 05:35:37 by fadwa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		philo
CC =		gcc
FLAGS =		-Wall -Werror -Wextra -pthread -g
RM =		rm -rf

SRC =		philo.c \
			utils.c \
			dinner_utils.c\
			dinner_start.c\

OBJECTS =	$(SRC:.c=.o)

.c.o:
			$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS) philo.h
			$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

clean:
			$(RM) $(OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
