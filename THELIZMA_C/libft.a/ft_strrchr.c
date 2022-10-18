/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:08:17 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/01 17:25:49 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	*str;

	str = (char *) s;
	i = ft_strlen(str) - 1;
	while (s[i] != '\0')
	{
		if (str[i] == c)
		{
			return (&str[i]);
		}
		i--;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Youness is the goat";
	printf("%s", ft_strrchr(str, 's'));
	return (0);
}