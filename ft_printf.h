/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:11:07 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 15:21:48 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char* , ...);
char	ft_putchar(char c);
void	ft_putnbr(int n);
char	ft_putstr(char *s);
void	ft_putnbr(int n);
char	check1(char *c, va_list ptr);
void	upperhexa(int n);
void	lowhexa(int n);

#endif
