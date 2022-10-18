/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 21:31:53 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/05 22:34:33 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else if (nb > 0)
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/