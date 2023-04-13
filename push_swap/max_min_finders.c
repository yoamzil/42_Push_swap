/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_min_finders.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:15:56 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 00:17:35 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_value(t_stack *stack)
{
	int	min;
	int	i;

	min = INT_MAX;
	i = 0;
	while (i <= stack->top)
	{
		if (stack->data[i] < min)
		{
			min = stack->data[i];
		}
		i++;
	}
	return (min);
}

int	max_finder(t_stack *b)
{
	int	i;
	int	max;

	i = 0;
	max = b->top + 1;
	while (i <= max)
	{
		if (b->data[i] == max)
			break ;
		i++;
	}
	return (b->top - i);
}
