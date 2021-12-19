/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:46:07 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 16:17:53 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	lowhexa(int n)
{
	char	*base;
	int		i;

	base = "0123456789abcdef";
	i = 0;
	if (n < 16)
		i += ft_putchar(base[n]);
	else
	{
		i += lowhexa(n / 16);
		i += lowhexa(n % 16);
	}
	return (i);
}

int	upperhexa(int n)
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