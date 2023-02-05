/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoamzil <yoamzil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:38:13 by yoamzil           #+#    #+#             */
/*   Updated: 2023/02/05 16:04:32 by yoamzil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_convert(char c, int server_pid)
{
	char	str[9];
	int		i;

	i = 7;
	str[8] = '\0';
	while (c != 0)
	{
		str[i] = c % 2 + 48;
		c = c / 2;
		i--;
	}
	while (c == 0 && i >= 0)
		str[i--] = 48;
	i = 0;
	while (str[i])
	{
		if (str[i] == '0')
			kill(server_pid, SIGUSR1);
		else if (str[i] == '1')
			kill(server_pid, SIGUSR2);
		usleep(300);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		server_pid;
	char	*str;
	int		i;

	server_pid = atoi(argv[1]);
	str = argv[2];
	i = 0;
	if (server_pid < 2)
		return (1);
	if (argc != 3)
	{
		printf("Number of arguments isn't correct.\n");
		return (1);
	}
	if (argc == 3)
	{
		while (str[i])
		{
			ft_convert(str[i], server_pid);
			i++;
		}
	}
	return (0);
}
