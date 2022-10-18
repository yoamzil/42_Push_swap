/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:06:08 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/10 16:19:04 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*target;
	size_t	len;

	len = ft_strlen(s1);
	target = malloc((len + 1) * sizeof(char));
	if (target == 0)
		return (0);
	ft_memmove(target, s1, len + 1);
	return (target);
}
