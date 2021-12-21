/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:46:07 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/21 16:18:20 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lowhexa(unsigned int n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(base[n]);
		i++;
	}
	else
	{
		i += lowhexa(n / 16);
		i += lowhexa(n % 16);
	}
	return (i);
}

int	lowhexa1(unsigned long long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		ft_putchar(base[n]);
		i++;
	}
	else
	{
		i += lowhexa1(n / 16);
		i += lowhexa1(n % 16);
	}
	return (i);
}

int	upperhexa(unsigned int n)
{
	char	*base;
	int		i;

	base = "0123456789ABCDEF";
	i = 0;
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += upperhexa(n / 16);
		i += upperhexa(n % 16);
	}
	return (i);
}
