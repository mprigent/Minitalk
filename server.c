/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 13:49:58 by mprigent          #+#    #+#             */
/*   Updated: 2021/07/06 15:09:07 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static t_msg	g_msg;

void	get_bit(int bit)
{
	g_msg.c += ((bit & 1) << g_msg.size);
	g_msg.size++;
	if (g_msg.size == 7)
	{
		ft_putchar(g_msg.c);
		g_msg.c = 0;
		g_msg.size = 0;
	}
}

int	main(void)
{
	g_msg.c = 0;
	g_msg.size = 0;
	ft_putstr("PID : ");
	ft_putnbr(getpid());
	ft_putchar('\n');
	while (1)
	{
		signal (SIGUSR2, get_bit);
		signal (SIGUSR1, get_bit);
		pause();
	}
}	
