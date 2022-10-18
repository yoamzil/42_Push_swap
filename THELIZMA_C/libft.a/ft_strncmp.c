/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:31:29 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/01 17:45:37 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *) s1;
	str2 = (char *) s2;
	while (i < n && (str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] == str2[i])
			i++;
		else if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "howa da";
	char	s2[] = "howa da";
	printf("%d", ft_strncmp(s1, s2, 4));
	return (0);
}
*/