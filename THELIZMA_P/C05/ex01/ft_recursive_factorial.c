/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:48:03 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/05 22:38:28 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		nb = nb * ft_recursive_factorial(i);
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(5));
}*/