/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:55:49 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/16 05:43:01 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *a, int number)
{
	a->top++;
	a->data[a->top] = number;
}

int	pop(t_stack *a)
{
	int	i;

	i = a->data[a->top];
	a->top--;
	return (i);
}

void	cases(t_stack *a, t_stack *b)
{
	if (a->looper == 3)
		three_sort(a);
	else if (a->looper == 4)
		four_sort(a, b);
	else if (a->looper == 5)
		five_sort(a, b);
	else if (a->looper == 100)
		sorting_alg(a, b, 14);
	else if (a->looper == 500)
		sorting_alg(a, b, 36);
	else
		sorting_alg(a, b, (a->looper * 100) / 14);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	a.top = -1;
	b.top = -1;
	arg_checker(argc - 1, &a, argv);
	ft_indexing(&a);
	if (sort_checker(&a))
		exit(0);
	b.data = malloc(a.looper * sizeof(int));
	if (!b.data)
	{
		free(a.data);
		return (0);
	}
	cases(&a, &b);
	free(a.data);
	free(b.data);
}
