/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:56:28 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/09 15:52:51 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	n;

	i = 1;
	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	else
	{
		while (i * i <= n)
		{
			if (i * i == n)
				return (i);
			else
				i++;
		}
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_sqrt(9));
}*/