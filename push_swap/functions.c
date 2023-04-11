/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:05:45 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/11 02:49:54 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	free_tab(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        free(tab[i]);
        i++;
    }
    free(tab);
}

// void	sort_checker(t_stack *a)
// {
//     int i;

//     i = a->top;
//     while (i > 0)
//     {
//         if (a->data[i] < a->data[i - 1])
//             exit(0);
//         i--;
//     }
// }


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

void	error_printing(t_stack *a)
{
	write(2, "Error\n", 6);
	//free(a);
	exit(0);
}

long	my_atoi(const char *str, t_stack *a)
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
			error_printing(a);
		else if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		if (number > INT_MAX)
			error_printing(a);
		i++;
	}
	return (number * sign);
}

void	dup_checker(t_stack *a)
{
	int	i;
	int	j;
	int size;

	
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

void	arg_checker(int	size, t_stack *a, t_stack *b, char **arg)
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
	// printf("-->%d\n", a->looper);

	a->data = malloc(a->looper * sizeof(int));
	b->data = malloc(a->looper * sizeof(int));
	if (!a->data || !b->data)
        exit(1);
	while (size > 0)
	{
		tab = ft_split(arg[size], ' ');//5|\0 6|\0 9|\0
		metric = word_num(arg[size], ' ') - 1;
		// printf("%d\n", metric);
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

void	ft_indexing(t_stack *a)
{
    int    j;
    int    *tab;
    int    i;

    tab = malloc((a->top + 1) * sizeof(int));
	j = 0;
    if (!tab)
        exit(EXIT_FAILURE);
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

int	max_finder(t_stack *b)
{
	int i;
	int	max;

	i = 0;
	max = b->top + 1;
	while (i <= max)
	{
		if (b->data[i] == max)
			break;
		i++;
	}
	return (b->top - i);
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
        {
            if (max <= b->top / 2)
			{
				while(rb_num)
				{
					rb(b);
					rb_num--;
				}
			}
            else
            {
				while(rrb_num)
				{
					rrb(b);
					rrb_num--;
				}
			}
        }
        pa(a, b);
    }
}

// void	sorting_four(t_stack *a)
// {
// 		int	i;
		
// 		i = get_max_value(&a);
// 		printf("hada howa lmax: %d\n", i);
// 		while (i == a.data[data])
// 		{
// 			pb(&a, &b);
// 		}
// 		three_sort(&a);
// 		pa(&a, &b);
// 		// ra(&a);
		
// }
int get_min_value(t_stack *stack)
{
    int min = INT_MAX;
	int	i;

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
