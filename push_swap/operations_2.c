/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:00:35 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 05:01:16 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[a->top];
		a->data[a->top] = a->data[a->top - 1];
		a->data[a->top - 1] = tmp;
	}
	printf("sa\n");
}

void	sb(t_stack *b)
{
	int	tmp;

	if (b->top > 0)
	{
		tmp = b->data[b->top];
		b->data[b->top] = b->data[b->top - 1];
		b->data[b->top - 1] = tmp;
	}
	printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[a->top];
		a->data[a->top] = a->data[a->top - 1];
		a->data[a->top - 1] = tmp;
	}
	if (b->top > 0)
	{
		tmp = b->data[b->top];
		b->data[b->top] = b->data[b->top - 1];
		b->data[b->top - 1] = tmp;
	}
	printf("ss\n");
}
