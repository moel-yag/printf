/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:25:51 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/28 20:25:52 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long n, int base, int is_lower)
{
	int		count;
	int		check;
	char	*symbols;

	symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		check = ft_putchar('-');
		if (check < 0)
			return (-1);
		check = ft_putnbr(-n, base, is_lower);
		if (check < 0)
			return (-1);
		return (check + 1);
	}
	else if (n < base)
		return (ft_putchar(symbols[n] + 32 * (is_lower != 0 && n > 9)));
	else
	{
		count = ft_putnbr(n / base, base, is_lower);
		check = ft_putnbr(n % base, base, is_lower);
		if (count < 0 || check < 0)
			return (-1);
		return (check + count);
	}
}
