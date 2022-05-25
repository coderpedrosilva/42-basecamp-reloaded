NAME = libft.a
HEADERS = includes/
PRE = srcs/
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SOURCES = ${addprefix ${PRE},${SRC}}
OBJECTS = ${SRC:.c=.o}
GCC = gcc -Wall -Werror -Wextra
RM = rm -f

all:		${NAME}

${NAME}:	${SOURCES}
			${GCC} -I ${HEADERS} -c ${SOURCES}
			ar -rcs ${NAME} ${OBJECTS}

clean:
			${RM} ${OBJECTS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re