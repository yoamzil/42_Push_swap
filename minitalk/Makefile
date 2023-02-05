CLIENT_NAME	= client
CLIENT_OBJS	= ft_client.o ft_tools.o

SERVER_NAME	= server
SERVER_OBJS	= ft_server.o ft_tools.o

CC		= cc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

all:	${CLIENT_NAME} ${SERVER_NAME}

${CLIENT_NAME}:	${CLIENT_OBJS}
		$(CC) $(CFLAGS) -o $(CLIENT_NAME) $(CLIENT_OBJS)

${SERVER_NAME}:	${SERVER_OBJS}
		$(CC) $(CFLAGS) -o $(SERVER_NAME) $(SERVER_OBJS)

%.o:%.c
		${CC} -c $< -o $@

clean:
		${RM} *.o

fclean:		clean
		${RM} ${CLIENT_NAME} ${SERVER_NAME}

re:		fclean all