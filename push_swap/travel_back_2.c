/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   travel_back_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:15:58 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 05:30:09 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	travel_back_2(int max, t_stack *b, int rb_num, int rrb_num)
{
	if (max <= b->top / 2)
	{
		while (rb_num)
		{
			rb(b);
			rb_num--;
		}
	}
	else
	{
		while (rrb_num)
		{
			rrb(b);
			rrb_num--;
		}
	}
}
