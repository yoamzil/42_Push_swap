/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:02:42 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/14 01:53:03 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *a, t_stack *b)
{
	int	i;
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[a->top];
		i = a->top;
		while (i-- > 0)
			a->data[i] = a->data[i - 1];
		a->data[0] = tmp;
	}
	if (b->top > 0)
	{
		tmp = b->data[a->top];
		i = b->top;
		while (i > 0)
		{
			b->data[i] = b->data[i - 1];
			i--;
		}
		b->data[0] = tmp;
	}
	write(1, "rr\n", 3);
}

void	rra(t_stack *a)
{
	int	i;
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[0];
		i = 0;
		while (i < a->top)
		{
			a->data[i] = a->data[i + 1];
			i++;
		}
		a->data[a->top] = tmp;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	int	i;
	int	tmp;

	if (b->top > 0)
	{
		tmp = b->data[0];
		i = 0;
		while (i < b->top)
		{
			b->data[i] = b->data[i + 1];
			i++;
		}
		b->data[b->top] = tmp;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	int	i;
	int	tmp;

	if (a->top > 0)
	{
		tmp = a->data[0];
		i = 0;
		while (i < a->top)
		{
			a->data[i] = a->data[i + 1];
			i++;
		}
		a->data[a->top] = tmp;
	}
	if (b->top > 0)
	{
		tmp = b->data[0];
		i = 0;
		while (i++ < b->top)
			b->data[i] = b->data[i + 1];
		b->data[b->top] = tmp;
	}
	write(1, "rrr\n", 4);
}
