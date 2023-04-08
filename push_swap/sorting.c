/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:39:27 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/08 01:54:44 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sorting_alg(t_stack *a, t_stack *b)
{
	int	index;
	int	range_start;
	int	range_end;

	index = a->top;
	range_start = 0;
	range_end = 14;
	while (index >= 0)
	{
		if ((a->data[index] >= range_start) && (a->data[index] <= range_end))
		{
			pb(a, b);
			printf("pb\n");
			range_start++;
			range_end++;
			index--;
		}
		else if (a->data[index] > range_end)
		{
			ra(a);
			printf("ra\n");
		}
		else if (a->data[index] < range_start)
		{
			pb(a, b);
			printf("pb\n");
			rb(b);
			printf("rb\n");
			range_start++;
			range_end++;
			index--;
		}
	}
}