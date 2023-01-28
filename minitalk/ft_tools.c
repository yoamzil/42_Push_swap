/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:21:21 by yoamzil           #+#    #+#             */
/*   Updated: 2023/01/28 18:21:25 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(n * (-1));
	}
	else if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(2);
		ft_putnbr(147483648);
	}
}
