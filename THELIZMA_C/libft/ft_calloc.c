/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 22:09:52 by yoamzil           #+#    #+#             */
/*   Updated: 2022/10/15 17:36:41 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*pointer;
	int	num;

	num = count * size;
	pointer = (int *)malloc(num);
	if (pointer == 0)
		return (0);
	ft_bzero(pointer, num);
	return (pointer);
}
