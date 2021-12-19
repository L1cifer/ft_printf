/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 14:46:07 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 15:24:41 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lowhexa(int n)
{
	char	base[16];

	base[16] = "0123456789abcdef";

	if (n < 16)
		ft_putchar(base[n]);
	else
	{
		lowhexa(n / 16);
		lowhexa(n % 16);
	}
}

void	upperhexa(int n)
{
	char	base[16];

	base[16] = "0123456789ABCDEF";

		if (n < 16)
		ft_putchar(base[n]);
	else
	{
		lowhexa(n / 16);
		lowhexa(n % 16);
	}
}
