/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:42:13 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/11 16:52:37 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*str;

	i = 0;
	range = max - min;
	str = malloc(range * sizeof(int));
	if (!str)
		return (0);
	if (min >= max)
		return (0);
	while (i < range)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	size;
	int	*str = ft_range(2, 5);

	i = 0;
	size = 5 - 2;
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}
}*/