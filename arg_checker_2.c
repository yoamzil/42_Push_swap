/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_checker_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 05:07:30 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 05:14:17 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_checker_2(int size, t_stack *a, char **arg, char **tab)
{
	int		metric;
	long	number;

	while (size > 0)
	{
		tab = ft_split(arg[size], ' ');
		if (tab[0] == NULL)
			error_printing(a);
		metric = word_num(arg[size], ' ') - 1;
		while (metric >= 0)
		{
			number = my_atoi(tab[metric], a);
			if (!num_checker(tab[metric]))
				error_printing(a);
			push(a, number);
			metric--;
		}
		size--;
		free_tab(tab);
	}
}
