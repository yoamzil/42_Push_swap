# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/30 02:19:43 by yoamzil           #+#    #+#              #
#    Updated: 2023/04/16 03:41:19 by yoamzil          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   push_swap
BONUS_NAME	=   checker

CC			=   cc 
CFLAGS		=   -Wall -Wextra -Werror

LIBFT		=   libft/libft.a

SRC			=   operations.c operations_2.c operations_3.c checkers.c functions.c sorting.c max_min_finders.c arg_checker_2.c travel_back_2.c sorting_alg_2.c
PSP			=    push_swap.c
SRC_BONUS	=	checker.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c operations_bonus.c operations_2_bonus.c operations_3_bonus.c

OBJ			= $(SRC:.c=.o)
OBJ_PSP		= $(PSP:.c=.o)
OBJ_BONUS	= $(SRC_BONUS:.c=.o)

RM			=   rm -f

all : $(NAME)
bonus: $(BONUS_NAME)

$(NAME) : $(OBJ) $(OBJ_PSP) $(LIBFT)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_PSP) $(LIBFT)

$(LIBFT):
	make -C libft


$(BONUS_NAME): $(OBJ) $(OBJ_BONUS) $(LIBFT)
	$(CC) -o $@ $(OBJ_BONUS) $(OBJ) $(LIBFT)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ_BONUS)
	$(RM) $(OBJ_PSP)
	make -C libft clean

fclean : clean
	$(RM) $(NAME)
	$(RM) $(BONUS_NAME)
	make -C libft fclean

re : fclean all
	make -C libft fclean re