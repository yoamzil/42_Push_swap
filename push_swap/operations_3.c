/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:02:42 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 00:04:49 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	rb(b);
	printf("rr\n");
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
}

void	rrb(t_stack *b)
{
	rra(b);
	printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rra(a);
	rrb(b);
	printf("rrr\n");
}
