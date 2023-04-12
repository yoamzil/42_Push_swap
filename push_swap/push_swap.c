/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:55:49 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/12 02:54:18 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <strings.h>
#include <stdlib.h>
#include <stdio.h>

void	push(t_stack *stack, int number)
{
	stack->top++;
	stack->data[stack->top] = number;
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	// int		i;
	a.top = -1;
	b.top = -1;
	arg_checker(argc - 1, &a, &b, argv);
	if (sort_checker(&a))
		exit(0);
	b.data = malloc(a.looper * sizeof(int));
	// i = b.top;
	// while (i >= 0)
	// {
	// 	printf("%d\n", b.data[i]);
	// 	i--;
	// }
	if (a.looper == 3)
	{
		three_sort(&a);
	}
	else if (a.looper == 4)
	{
		four_sort(&a, &b);
	}
	else if (a.looper == 5)
	{
		five_sort(&a, &b);
	}
	else if (a.looper == 100)
	{
		ft_indexing(&a);
		sorting_alg(&a, &b, 14);
	}
	else if (a.looper == 500)
	{
		ft_indexing(&a);
		sorting_alg(&a, &b, 36);
	}
	else
	{	
		ft_indexing(&a);
		sorting_alg(&a, &b, (a.looper * 100) / 14);
	}
}
