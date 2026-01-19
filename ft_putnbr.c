/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 13:48:49 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/19 18:15:52 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long		number;
	int			len;

	number = n;
	len = 0;
	if (number < 0)
	{
		len += write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		len += ft_putnbr(number / 10);
	len += ft_putnbr((number % 10) + '0');
	return (len);
}
