/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:41:34 by mprigent          #+#    #+#             */
/*   Updated: 2021/07/06 15:03:59 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(int pid, char *msg, size_t len)
{
	int		shifting;
	size_t	i;

	i = 0;
	while (i <= len)
	{
		shifting = 0;
		while (shifting < 7)
		{
			if ((msg[i] >> shifting) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			shifting++;
			usleep(100);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac == 3)
	{
		pid = atoi(av[1]);
		send_bit(pid, av[2], ft_strlen(av[2]));
	}
	else
		ft_putstr("enter server PID and message to send\n");
	return (0);
}
