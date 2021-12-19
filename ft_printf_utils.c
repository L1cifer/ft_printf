/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:36:35 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 16:26:31 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(1);
}

long long	ft_nblen(long long	x)
{
	int i;

	i = 0;
	while (x)
	{
		x = x / 10;
		i++;
	}
	return (i);
}
int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write (1,&s[i],1);
		i++;
	}
	return(i);
}
int	ft_putnbr(int n)
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
	return (ft_nblen(nb));
}
int	ft_uputnbr(unsigned int nb)
{
	if (nb < 10)
	{
		ft_putchar((char)(nb + '0'));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((char)(nb % 10 + '0'));
	}
	return (ft_nblen(nb));
}