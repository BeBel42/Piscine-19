SRC = $(addprefix srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJ = ${SRC:.c=.o}

all: libft.a

libft.a: ${OBJ}
	ar -rcs libft.a ${OBJ}

${OBJ}:
	gcc -Wall -Wextra -Werror -c -I./includes ${@:.o=.c} -o $@

clean:
	rm -f ${OBJ}
	
fclean: clean
	rm -f libft.a

re: fclean all

.PHONY: all clean fclean re
