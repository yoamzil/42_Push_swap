/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:05:45 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/13 05:46:43 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	word_num(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			while (str[i] && str[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

long	my_atoi(const char *str)
{
	int		i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i + 1] == '+' || str[i + 1] == '-')
			error_printing();
		else if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		if (number > INT_MAX)
			error_printing();
		i++;
	}
	return (number * sign);
}

void	ft_indexing(t_stack *a)
{
	int	i;
	int	j;
	int	*tab;

	tab = malloc((a->top + 1) * sizeof(int));
	if (!tab)
		exit(1);
	initialize(a, tab);
	j = 0;
	while (j <= a->top)
	{
		i = j;
		while (i <= a->top)
		{
			if (a->data[j] >= a->data[i])
				tab[j]++;
			else
				tab[i]++;
			i++;
		}
		j++;
	}
	free(a->data);
	a->data = tab;
}

void	travel_back(t_stack *a, t_stack *b)
{
	int	i;
	int	rb_num;
	int	rrb_num;
	int	max;

	i = b->top;
	while (i-- >= 0)
	{
		max = max_finder(b);
		if (max < 0)
			exit(1);
		rb_num = max;
		rrb_num = b->top - max + 1;
		if (max != 0)
			travel_back_2(max, b, rb_num, rrb_num);
		pa(a, b);
	}
}
