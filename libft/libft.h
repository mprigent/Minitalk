/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprigent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 14:07:55 by mprigent          #+#    #+#             */
/*   Updated: 2021/07/06 15:06:09 by mprigent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen(const char *s);
int				ft_atoi(const char *str);
int				ft_putchar(int c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr(char const *s);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr(int nb);
void			ft_putnbr_fd(int n, int fd);

#endif
