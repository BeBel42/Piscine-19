SRCS = displaybuf.c main.c readfile.c writeerr.c
OBJS = ${SRCS:.c=.o}

all: ft_display_file

ft_display_file: ${OBJS}
	gcc -Wall -Wextra -Werror $^ -o $@

${OBJS}:
	gcc -Wall -Wextra -Werror -c ${@:.o=.c} -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ft_display_file

re: fclean all

.PHONY: all clean fclean re
