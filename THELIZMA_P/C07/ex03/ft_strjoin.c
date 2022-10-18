/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:56:25 by yoamzil           #+#    #+#             */
/*   Updated: 2022/04/11 21:41:35 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		f;
	int		m;
	char	*des;

	des = malloc(sizeof(strs));
	i = 0;
	f = 0;
	m = 0;
	while (i < size)
	{
		f = 0;
		while (strs[i][f])
		{
			des[m++] = strs[i][f++];
		}
		f = 0;
		while (sep[f] && i != size - 1)
		{
			des[m++] = sep[f++];
		}		
		i++;
	}
	des[m] = '\0';
	return (des);
}

/*#include <stdio.h>
int main()
{
	char *str[3];
	str[0] = "you";
	str[1] = "hello world";
	str[2] = "younnes";
	printf("%s",ft_strjoin(3,str,"||"));
}*/