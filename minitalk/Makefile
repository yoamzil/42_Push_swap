SRCS	= ft_client.c ft_server.c ft_tools.c

OBJS	= ${SRCS:.c=.o}

NAME	= minitalk.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

all:	${NAME}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

%.o:%.c
		${CC} -c $< -o $@

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all