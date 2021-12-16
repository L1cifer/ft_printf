/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:11:04 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/16 20:05:15 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *f, ...)
{
	va_list	ptr;
	int		i;
	int		count;

	va_start (ptr, f);
	i = 0;
	while (f[i])
	{
		if (f[i] == '%')
			i++;
		if (check1('c'))
			count += ft_putchar((char)va_arg(ptr,int));
		if (check1('s'))
			count += ft_putstr(va_arg(ptr,char*));
		if (check1('u'))
			count += ft_unputnbr(va_arg(ptr,int));
	}
}
