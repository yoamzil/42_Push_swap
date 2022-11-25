SRCS	= ft_putchar.c ft_putstr.c ft_putnbr.c ft_convert.c ft_printf.c ft_hexa.c ft_putnbr_uns.c

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

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