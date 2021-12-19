/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:51:25 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 15:24:31 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check1(char *c, va_list ptr)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar((char)va_arg(ptr,int));
	if (c == 's')
		count += ft_putstr(va_arg(ptr,char*));
	if (c == 'u')
		count += ft_unputnbr(va_arg(ptr,int));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ptr,int));		
	if (c == '%')
		count += ft_putchar('%');
	if (c == 'x')
		count += lowhexa(va_arg(ptr,int));
	if (c == 'X')
		count += upperhexa(va_arg(ptr,int));
	if (c == 'p')
		count += 
	return (count);
}