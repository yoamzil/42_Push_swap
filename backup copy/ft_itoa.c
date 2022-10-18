/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:56:15 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/17 19:46:40 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= (-1);
		i++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*to_string(int n, char *str, int i, int num)
{
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		str[0] = '-';
	}
	if (n == 0)
		str[i] = '0';
	while (n > 0)
	{
		num = n % 10;
		str[i] = num + '0';
		n = n / 10;
		i--;
	}
	if (n == -2147483648)
		str = ft_strdup("-2147483648");
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		num;

	str = (char *)malloc(len(n) + 1);
	if (str == 0)
		return (0);
	i = len(n) - 1;
	str[i + 1] = '\0';
	num = n;
	str = to_string(n, str, i, num);
	return (str);
}

/*
int main()
{
	printf("%s", ft_itoa(-1234));
	return 0;
}
*/