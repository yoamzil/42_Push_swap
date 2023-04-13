# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 02:19:43 by yoamzil           #+#    #+#              #
#    Updated: 2023/04/13 05:26:34 by yoamzil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   push_swap
BONUS_NAME	=   checker
CC			=   cc 
CFLAGS		=   -Wall -Wextra -Werror
LIBFT		=   libft/libft.a
RM			=   rm -f
SRC			=   operations.c operations_2.c operations_3.c checkers.c functions.c sorting.c max_min_finders.c arg_checker_2.c travel_back_2.c sorting_alg_2.c
PSP			=    push_swap.c

SRC_BONUS	=	checker.c\
				get_next_line.c\
				get_next_line_utils.c\
				ins_bonus_1.c\

OBJ			= $(SRC:.c=.o)
OBJ_PSP		= $(PSP:.c=.o)
OBJ_BONUS	= $(SRC_BONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

all : $(NAME)

$(NAME) : $(OBJ) $(OBJ_PSP) $(LIBFT)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_PSP) $(LIBFT)

$(BONUS_NAME) : $(OBJ) $(OBJ_BONUS) $(LIBFT)

$(OBJ) : $(SRC)
	$(CC) -c $(SRC)

$(LIBFT):
	make -C ./libft

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_BONUS)
	$(RM) $(OBJ_PSP)
	make -C libft clean

bonus: $(BONUS_NAME) 

$(BONUS_NAME): $(OBJ_BONUS) $(LIBFT)
	$(CC) -o $@ $(OBJ_BONUS) $(OBJ) $(LIBFT)

fclean : clean
	$(RM) $(NAME)
	$(RM) $(BONUS_NAME)
	make -C ./libft fclean

re : fclean all
	make -C libft re