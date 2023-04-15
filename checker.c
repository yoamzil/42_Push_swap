/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 01:44:51 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/15 02:56:41 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack *stack, int number)
{
	stack->top++;
	stack->data[stack->top] = number;
}

int	pop(t_stack *stack)
{
	int	i;

	i = stack->data[stack->top];
	stack->top--;
	return (i);
}

void	comparing(t_stack *a, t_stack *b, char *str)
{
	if (!ft_strncmp(str, "ra\n", 4))
		ra_B(a);
	else if (!ft_strncmp(str, "rb\n", 4))
		rb_B(b);
	else if (!ft_strncmp(str, "rr\n", 4))
		rr_B(a, b);
	else if (!ft_strncmp(str, "pa\n", 4))
		pa_B(a, b);
	else if (!ft_strncmp(str, "pb\n", 4))
		pb_B(a, b);
	else if (!ft_strncmp(str, "sa\n", 4))
		sa_B(a);
	else if (!ft_strncmp(str, "sb\n", 4))
		sb_B(b);
	else if (!ft_strncmp(str, "ss\n", 4))
		ss_B(a, b);
	else if (!ft_strncmp(str, "rra\n", 5))
		rra_B(a);
	else if (!ft_strncmp(str, "rrb\n", 5))
		rrb_B(b);
	else if (!ft_strncmp(str, "rrr\n", 5))
		rrr_B(a, b);
	else
		error_printing(a);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	char	*str;

	a.top = -1;
	b.top = -1;
	str = NULL;
	arg_checker(argc - 1, &a, &b, argv);
	ft_indexing(&a);
	if (sort_checker(&a))
		exit(0);
	b.data = malloc(a.looper * sizeof(int));
	while (1)
	{
		str = get_next_line(1);
		if (str == NULL)
			break ;
		comparing(&a, &b, str);
	}
	if (!sort_checker(&a))
		write(1, "KO\n", 3);
	else if (sort_checker(&a) && (b.top == -1))
		write(1, "OK\n", 3);
}
