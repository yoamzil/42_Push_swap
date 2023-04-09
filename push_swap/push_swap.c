/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:55:49 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/09 02:54:21 by yoamzil          ###   ########.fr       */
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
	t_stack a;
	t_stack b;
	int		i;

	a.top = -1;
	b.top = -1;
	
	arg_checker(argc - 1, &a, &b, argv);
	printf("---------A-----------\n");
	i = a.top;
	while (i >= 0)
	{
		printf("%d\n", a.data[i]);
		i--;
	}
	ft_indexing(&a);
	
	// i = b.top;
	// while (i >= 0)
	// {
	// 	printf("%d\n", b.data[i]);
	// 	i--;
	// }
	// ra(&a);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// pb(&a, &b);
	// sb(&b);
	// rb(&b);
	// rb(&b);
	// rb(&b);
	// i = a.top;
	// while (i >= 0)
	// {
	// 	printf("%d\n", a.data[i]);
	// 	i--;
	// }
	
	// pb(&a, &b);
	sorting_alg(&a, &b);
	
	
	printf("---------B-----------\n");
	i = b.top;
	while (i >= 0)
	{
		printf("%d\n", b.data[i]);
		i--;
	}
	travel_back(&a, &b);
	printf("---------NewA-----------\n");
	i = a.top;
	while (i >= 0)
	{
		printf("%d\n", a.data[i]);
		i--;
	}
}