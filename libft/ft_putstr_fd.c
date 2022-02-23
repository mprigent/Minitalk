/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:00:59 by mprigent          #+#    #+#             */
/*   Updated: 2021/07/05 17:12:37 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	char const	*scpy;

	if (s != NULL)
	{
		scpy = s;
		while (*scpy != '\0')
		{
			ft_putchar_fd(*scpy, fd);
			scpy++;
		}
	}
}
