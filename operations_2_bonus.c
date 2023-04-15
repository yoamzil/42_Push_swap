/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 02:52:50 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/15 02:53:15 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_B(t_stack *a)
{
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[a->top];
		a->data[a->top] = a->data[a->top - 1];
		a->data[a->top - 1] = tmp;
	}
}

void	sb_B(t_stack *b)
{
	int	tmp;

	if (b->top > 0)
	{
		tmp = b->data[b->top];
		b->data[b->top] = b->data[b->top - 1];
		b->data[b->top - 1] = tmp;
	}
}

void	ss_B(t_stack *a, t_stack *b)
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
}