/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 17:38:42 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/06 18:13:40 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		else
			i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(2));
}*/