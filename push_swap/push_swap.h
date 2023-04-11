/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 02:02:19 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/11 02:42:18 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

#include <limits.h>

typedef struct s_stack {
    int *data;
    int top;
    int looper;
} t_stack;

void    sa(t_stack *a);
void    sb(t_stack *b);
void    ss(t_stack *a, t_stack *b);
void    pa(t_stack *a, t_stack *b);
void    pb(t_stack *a, t_stack *b);
void    ra(t_stack *a);
void    rb(t_stack *b);
void    rr(t_stack *a, t_stack *b);
void    rra(t_stack *a);
void    rrb(t_stack *b);
void    rrr(t_stack *a, t_stack *b);
void	error_printing(t_stack *a);
int     word_num(char const *str, char c);
int     ft_atoi(const char *str, t_stack *a);
int     num_checker(char *str);
void    arg_checker(int	size, t_stack *a, t_stack *b, char **arg);
void	push(t_stack *stack, int number);
void	sorting_alg(t_stack *a, t_stack *b);
void	ft_indexing(t_stack *a);
void	travel_back(t_stack *a, t_stack *b);
void	three_sort(t_stack *a);
void	min_of_three(t_stack *a, int *ptr);
int     max_finder(t_stack *b);
int     get_min_value(t_stack *a);
void	four_sort(t_stack *a, t_stack *b);
void	five_sort(t_stack *a, t_stack *b);
// void	sort_checker(t_stack *a);
#endif