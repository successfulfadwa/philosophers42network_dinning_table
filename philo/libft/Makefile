SRC		= 	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
			ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c  \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c  \
			ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
			ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
			ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_printf.c ft_hexax_p.c \
			ft_print_x.c ft_putchar.c ft_putnbr.c ft_putnbr_unsignedint.c ft_putstr.c

OBJS	=	${SRC:.c=.o}

CC		=	cc

CFLAGS 	= 	-Wall -Werror -Wextra

RM 		=	rm -f

NAME	=	libft.a

all:	$(NAME) 
	
%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# test : all
# 	@ $(CC) main.c $(NAME)
# 	@ ./a.out
clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean	$(NAME)
