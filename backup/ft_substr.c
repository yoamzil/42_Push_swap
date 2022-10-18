/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 17:35:55 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/17 18:46:26 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pointer;
	if (!s)
		return (0);
	pointer = malloc(len+1);
	if (pointer == 0)
		return (0);
	if (start < len)
	{
		ft_memmove(pointer, s + start, len);
	}
	else
		return ft_strdup("");
	pointer[len] = '\0';
	return (pointer);
}
