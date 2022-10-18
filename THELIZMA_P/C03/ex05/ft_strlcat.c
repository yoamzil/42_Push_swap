/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 15:15:30 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/14 20:08:05 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	j = 0;
	len1 = ft_strlen(src);
	len2 = ft_strlen(dest);
	j = len2;
	if (size == 0 || size <= len2)
		return (len1 + size);
	while (src[i] != '\0' && i < size - len2 - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len1 + len2);
}

/*#include <stdio.h>
int	main(void)
{
	char	src[] = "youness";
	char	dest[] = "amzil";
	printf("%i \n", ft_strlcat(dest, src, 25));
	printf("%s \n", dest);
}*/