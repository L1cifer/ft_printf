/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atakeddi <atakeddi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 21:51:25 by atakeddi          #+#    #+#             */
/*   Updated: 2021/12/15 15:25:12 by atakeddi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	check1(char c)
{
	if ( c == 'c')
		return(1);
	if (c == 's')
		return(1);
	if (c == 'u')
		return(1);
}