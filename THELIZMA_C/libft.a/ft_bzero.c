/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:58:17 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/03 13:33:58 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;
	char	cc;

	i = 0;
	str = s;
	cc = '\0';
	while (i < n)
	{
		str[i] = cc;
		i++;
	}
}

#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	b[10] = "TOOLATE";
	ft_bzero(b, 2);
	
	printf("%s", b);
	return (0);
}