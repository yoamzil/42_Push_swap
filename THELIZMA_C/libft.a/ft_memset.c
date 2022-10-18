/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:55:19 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/03 13:30:58 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*str;
	char	cc;

	i = 0;
	str = b;
	cc = c;
	while (i < len)
	{
		str[i] = cc;
		i++;
	}
	return (b);
}

#include <stdio.h>

int	main(void)
{
	char	b[16] = "TOOLATE";
	printf("%s", ft_memset(b, 'a', 11));
	return (0);
}