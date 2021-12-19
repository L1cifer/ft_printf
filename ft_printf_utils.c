/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:36:35 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/17 17:18:24 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_putchar(char c)
{
	write(1, 'c', 1);
	return(1);
}
char	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		putchar(&s[i++]);
	}
	return(i);
}
void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
void	ft_unputnbr(int n)
{
	unsigned int	nb;

	nb = n;
	ft_unputnbr(nb / 10);
	ft_unputnbr(nb % 10);
}
