/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 22:56:35 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/09 16:05:24 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 1)
		return (nb);
	else if (power > 1)
	{
		while (i <= power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(2, 3));
}*/