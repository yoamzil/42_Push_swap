/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:08:35 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 00:11:03 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_printing(t_stack *a)
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
				error_printing(a);
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

void	arg_checker(int size, t_stack *a, t_stack *b, char **arg)
{
	int		index;
	int		metric;
	char	**tab;
	int		number;

	a->looper = 0;
	index = 1;
	while (index <= size)
	{
		a->looper += word_num(arg[index], ' ');
		index++;
	}
	a->data = malloc(a->looper * sizeof(int));
	if (!a->data)
		exit(1);
	while (size > 0)
	{
		tab = ft_split(arg[size], ' ');
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
	dup_checker(a);
}
