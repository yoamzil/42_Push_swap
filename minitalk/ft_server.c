/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:38:00 by yoamzil           #+#    #+#             */
/*   Updated: 2023/01/28 18:16:16 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_usr(int sign)
{
	static char	buffer[8];
	static int	index;
	int			decimal;
	int			j;

	decimal = 0;
	if (sign == SIGUSR1)
		buffer[index++] = '0';
	else if (sign == SIGUSR2)
		buffer[index++] = '1';
	if (index == 8)
	{
		j = 0;
		while (j < 8)
		{
			decimal = (decimal * 2) + (buffer[j] - 48);
			j++;
		}
		ft_putchar(decimal);
		index = 0;
	}
}

int	main(void)
{
	int	server_pid;

	server_pid = getpid();
	signal(SIGUSR1, sig_usr);
	signal(SIGUSR2, sig_usr);
	ft_putnbr(server_pid);
	ft_putchar('\n');
	while (1)
	{
		pause();
	}
	return (0);
}
