/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:08:35 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/15 23:24:44 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_printing(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

int	sort_checker(t_stack *a)
{
	int	i;

	i = a->top;
	while (i > 0)
	{
		if (a->data[i] > a->data[i - 1])
			return (0);
		i--;
	}
	return (1);
}

void	dup_checker(t_stack *a)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = a->top + 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (a->data[i] == a->data[j])
				error_printing();
			j++;
		}
		i++;
	}
}

int	num_checker(char *str)
{
	int	i;

	i = 0;
	if ((str[i] == '+' || str[i] == '-') && ft_strlen(str) > 1)
		i++;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	arg_checker(int size, t_stack *a, char **arg)
{
	int		index;
	char	**tab;

	a->looper = 0;
	index = 1;
	tab = NULL;
	while (index <= size)
	{
		a->looper += word_num(arg[index], ' ');
		index++;
	}
	a->data = malloc(a->looper * sizeof(int));
	if (!a->data)
		return ;
	arg_checker_2(size, a, arg, tab);
	dup_checker(a);
}
