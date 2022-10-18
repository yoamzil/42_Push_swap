/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:11:38 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/05 22:10:47 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ddest;
	char	*ssrc;

	ddest = dst;
	ssrc = (char *) src;
	if (ddest == 0 && ssrc == 0)
		return (0);
	if (ddest > ssrc)
	{
		while (len > 0)
		{
			ddest[len - 1] = ssrc[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(ddest, ssrc, len);
	return (ddest);
}
