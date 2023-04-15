/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:02:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/15 23:16:11 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "get_next_line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <strings.h>

typedef struct s_stack {
	int	*data;
	int	top;
	int	looper;
}	t_stack;

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sa_b(t_stack *a);
void	sb_b(t_stack *b);
void	ss_b(t_stack *a, t_stack *b);
void	pa_b(t_stack *a, t_stack *b);
void	pb_b(t_stack *a, t_stack *b);
void	ra_b(t_stack *a);
void	rb_b(t_stack *b);
void	rr_b(t_stack *a, t_stack *b);
void	rra_b(t_stack *a);
void	rrb_b(t_stack *b);
void	rrr_b(t_stack *a, t_stack *b);
void	error_printing(void);
int		word_num(char const *str, char c);
int		ft_atoi(const char *str, t_stack *a);
int		num_checker(char *str);
void	arg_checker(int size, t_stack *a, char **arg);
void	push(t_stack *stack, int number);
int		pop(t_stack *stack);
void	sorting_alg(t_stack *a, t_stack *b, int range_end);
void	ft_indexing(t_stack *a);
void	travel_back(t_stack *a, t_stack *b);
void	three_sort(t_stack *a);
void	min_of_three(t_stack *a, int *ptr);
int		max_finder(t_stack *b);
int		get_min_value(t_stack *a);
void	four_sort(t_stack *a, t_stack *b);
void	five_sort(t_stack *a, t_stack *b);
int		sort_checker(t_stack *a);
long	my_atoi(const char *str);
void	free_tab(char **tab);
void	arg_checker_2(int size, t_stack *a, char **arg, char **tab);
void	travel_back_2(int max, t_stack *b, int rb_num, int rrb_num);
void	sorting_alg_2(t_stack *a, t_stack *b, int *range_start, int *range_end);
void	initialize(t_stack *a, int *tab);
void	comparing(t_stack *a, t_stack *b, char *str);

#endif