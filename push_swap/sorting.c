/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:39:27 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/11 00:35:39 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	min_of_three(t_stack *a, int *ptr)
{
    int    min;

    if (a->data[0] < a->data[1])
    {
        min = a->data[0];
        *ptr = 0;
    }
    else
    {
        min = a->data[1];
        *ptr = 1;
    }
    if (a->data[2] < min)
    {
        min = a->data[2];
        *ptr = 2;
    }
}

void	max_of_three(t_stack *a, int *ptr)
{
    int    max;

    if (a->data[0] > a->data[1])
    {
        max = a->data[0];
        *ptr = 0;
    }
    else
    {
        max = a->data[1];
        *ptr = 1;
    }
    if (a->data[2] > max)
    {
        max = a->data[2];
		*ptr = 2;
    }
}

void    three_sort(t_stack *a)
{
    int    i_max;

    max_of_three(a, &i_max);
    if (i_max == 2)
	{
		ra(a);
		printf("ra\n");
	}
    else if (i_max == 1)
	{
		rra(a);
		printf("rra\n");
	}
    if (a->data[2] > a->data[1])
	{
		sa(a);
		printf("sa\n");
	}
}
void	four_sort(t_stack *a, t_stack *b)
{
		int	i;
		
		i = get_min_value(a);
		while (i != a->data[a->top])
		{
			ra(a);
			printf("ra\n");
		}
		pb(a, b);
		three_sort(a);
		pa(a, b);
}

void	five_sort(t_stack *a, t_stack *b)
{
		int	i;
		
		i = get_min_value(a);
		while (i != a->data[a->top])
		{
			ra(a);
			printf("ra\n");
		}
		pb(a, b);
		four_sort(a, b);
		pa(a, b);
}

void	sorting_alg(t_stack *a, t_stack *b)
{
	int	index;
	int	range_start;
	int	range_end;

	index = a->top;
	range_start = 0;
	range_end = 10;
	while (index >= 0)
	{
		if ((a->data[index] >= range_start) && (a->data[index] <= range_end))
		{
			pb(a, b);
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
			rb(b);
			range_start++;
			range_end++;
			index--;
		}
	}
	travel_back(a, b);
}