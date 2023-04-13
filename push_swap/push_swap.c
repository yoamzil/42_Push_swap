/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:55:49 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/12 23:49:02 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int number)
{
	stack->top++;
	stack->data[stack->top] = number;
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.top = -1;
	b.top = -1;
	arg_checker(argc - 1, &a, &b, argv);
	ft_indexing(&a);
	if (sort_checker(&a))
		exit(0);
	b.data = malloc(a.looper * sizeof(int));
	if (a.looper == 3)
		three_sort(&a);
	else if (a.looper == 4)
		four_sort(&a, &b);
	else if (a.looper == 5)
		five_sort(&a, &b);
	else if (a.looper == 100)
		sorting_alg(&a, &b, 14);
	else if (a.looper == 500)
		sorting_alg(&a, &b, 36);
	else
		sorting_alg(&a, &b, (a.looper * 100) / 14);
}
