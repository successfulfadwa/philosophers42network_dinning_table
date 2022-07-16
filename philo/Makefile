# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 03:32:20 by fadwa             #+#    #+#              #
#    Updated: 2022/07/16 04:40:14 by fadwa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				=	getnext_line/get_next_line_utils.c getnext_line/get_next_line.c \
	philo.c utils.c
OBJ				=	$(addprefix obj/, ${SRC:.c=.o})


CC				=	cc

CFLAGS 			=	-Wall -Werror -Wextra -g

RM 				=	rm -f

LIBS			=	philo.h

NAME			=	philo

LIBRARY = libft/libft.a


all:	$(NAME)

$(NAME) :$(LIBRARY)	$(OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJ) -g -o $(NAME)


$(LIBRARY) :
	make -C libft

obj/%.o: %.c
	@ mkdir -p obj/getnext_line
	$(CC)  -c $< -o $@


fclean:
	make fclean -C libft
	$(RM) $(OBJ) $(NAME)

re:			fclean $(OBJ) $(NAME)
