/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:11:07 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/19 17:24:40 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int			ft_printf(const char *c, ...);
int			ft_putchar(char c);
int			ft_putnbr(int n);
int			ft_putstr(char *s);
int			ft_putnbr(int n);
int			upperhexa(int n);
int			lowhexa(int n);
long long	ft_nblen(long long n);
int			ft_uputnbr(unsigned int nb);

#endif
