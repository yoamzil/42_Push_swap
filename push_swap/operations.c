/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:46:18 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 00:06:48 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pop(t_stack *stack)
{
	int	i;

	i = stack->data[stack->top];
	stack->top--;
	return (i);
}

void	pa(t_stack *a, t_stack *b)
{
	push(a, pop(b));
	printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (a->top == -1)
		return ;
	b->top++;
	b->data[b->top] = a->data[a->top];
	a->top--;
	printf("pb\n");
}

void	ra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[a->top];
		i = a->top;
		while (i > 0)
		{
			a->data[i] = a->data[i - 1];
			i--;
		}
		a->data[0] = tmp;
	}
}

void	rb(t_stack *b)
{
	ra(b);
	printf("rb\n");
}
