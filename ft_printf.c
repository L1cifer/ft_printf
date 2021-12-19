/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:11:04 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 16:27:47 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check1(char c, va_list ptr)
{
	int	count;

	if (c == 'c')
		count = ft_putchar((char)va_arg(ptr,int));
	else if (c == 's')
		count = ft_putstr(va_arg(ptr,char*));
	else if (c == 'u')
		count = ft_uputnbr(va_arg(ptr,int));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ptr,int));		
	else if (c == '%')
		count = ft_putchar('%');
	else if (c == 'x')
		count = lowhexa(va_arg(ptr,int));
	else if (c == 'X')
		count = upperhexa(va_arg(ptr,int));
	// if (c == 'p')
	// 	count += 
	return (count);
}

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
		{
			i++;
			count += check1(f[i],ptr);
		}
		else 
			count += ft_putchar(f[i]);
		i++;
	}
	return (count);
}
int main()
{
	ft_printf("%d",1287984);
}