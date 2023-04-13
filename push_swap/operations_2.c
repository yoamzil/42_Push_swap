/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:00:35 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 00:01:22 by yoamzil          ###   ########.fr       */
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
}

void	sb(t_stack *b)
{
	sa(b);
	printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	printf("ss\n");
}
