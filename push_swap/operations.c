/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:46:18 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 05:05:14 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	printf("ra\n");
}

void	rb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->top > 0)
	{
		tmp = b->data[b->top];
		i = b->top;
		while (i > 0)
		{
			b->data[i] = b->data[i - 1];
			i--;
		}
		b->data[0] = tmp;
	}
	printf("rb\n");
}
