/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <mprigent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 16:59:45 by mprigent          #+#    #+#             */
/*   Updated: 2021/07/06 15:12:06 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	char		arr[12];
	int			c;
	long int	nbim;

	c = 0;
	nbim = nb;
	if (nbim == 0)
		ft_putchar('0');
	if (nbim < 0)
	{
		ft_putchar('-');
		nbim *= (-1);
	}
	while (nbim != 0)
	{
		arr[c] = ((nbim % 10) + '0');
		nbim /= 10;
		c++;
	}
	while ((c - 1) >= 0)
	{
		ft_putchar(arr[c - 1]);
		c--;
	}
}
