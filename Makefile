NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror 
SRCS = functions_printf.c ft_printf.c ft_add.c

OBJS = ${SRCS:.c=.o}

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rc ${NAME} $(OBJS)

clean :
	rm -f ${OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all
