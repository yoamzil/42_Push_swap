/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:46:18 by yoamzil           #+#    #+#             */
/*   Updated: 2023/04/07 02:04:21 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

#define STACK_SIZE 10000

int	pop(t_stack *stack)
{
	int	i;

	i = stack->data[stack->top];
    // printf("%d-->",stack->data[stack->top]);
	stack->top--;
    // printf("--------%d",stack->top);
	return (i);	
}
void    sa(t_stack *a)
{
    int tmp;

    if (a->top > 0) {
        tmp = a->data[a->top];
        a->data[a->top] = a->data[a->top - 1];
        a->data[a->top - 1] = tmp;
    }
}

void    sb(t_stack *b)
{
    sa(b);
    // printf("\n-%i-\n", b->data[b->top]);
}

void    ss(t_stack *a, t_stack *b)
{
    sa(a);
    sb(b);
}

void    pa(t_stack *a, t_stack *b)
{
    push(a, pop(b));
    // if (b->top >= 0) {
    //     a->top++;
    //     a->data[a->top] = b->data[b->top];
    //     b->top--;
    // }
}

void    pb(t_stack *a, t_stack *b)
{
    // push(b, pop(a));
    // pa(b, a);
    if (a->top == -1)
        return;
    
    b->top++;
    b->data[b->top] = a->data[a->top];
    a->top--;
    // printf("\n-%i-\n", b->data[b->top]);
    // printf("\nb top :%i-\n", a->top);
}

void    ra(t_stack *a)
{
    int i;
    int tmp;

    if (a->top > 0) {
        tmp = a->data[a->top];
        i = a->top;
        while (i > 0)
        {
            a->data[i] = a->data[i - 1];
            i--;
        }
        a->data[0] = tmp;
    }
}

void    rb(t_stack *b)
{
    ra(b);
    printf("\n-%i-\n", b->data[b->top]);
}

void    rr(t_stack *a, t_stack *b)
{
    ra(a);
    rb(b);
}

void    rra(t_stack *a)
{
    int i;
    int tmp;

    if (a->top > 0) {
        tmp = a->data[0];
        i = 0;
        while (i < a->top)
        {
            a->data[i] = a->data[i + 1];
            i++;
        }
        a->data[a->top] = tmp;
    }
}

void    rrb(t_stack *b)
{
    rra(b);
}

void    rrr(t_stack *a, t_stack *b)
{
    rra(a);
    rrb(b);
}