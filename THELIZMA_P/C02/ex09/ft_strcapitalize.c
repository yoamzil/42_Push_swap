/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:25:40 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/11 23:22:48 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	end;

	i = 0;
	end = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (end && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!end && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			end = 0;
		}
		else
			end = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "so wave+your-flag";
	printf("%s", ft_strcapitalize(str));
}*/