/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-yag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:25:38 by moel-yag          #+#    #+#             */
/*   Updated: 2024/11/28 20:25:40 by moel-yag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_addr(uintptr_t addr)
{
	int		count;
	int		check;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (addr < 16)
		return (ft_putchar(symbols[addr]));
	else
	{
		count = ft_putnbr_addr(addr / 16);
		if (count < 0)
		    return (-1);
		check = ft_putchar(symbols[addr % 16]);
		if (check < 0)
			return (-1);
		return (count + check);
	}
}

int	ft_putaddr(uintptr_t addr)
{
	int	check;

	if (addr == 0)
		return (write(1, "(nil)", 5));
	check = write(1, "0x", 2);
	if (check < 0)
		return (-1);
	check = ft_putnbr_addr(addr);
	if (check < 0)
		return (-1);
	return (check + 2);
}

int	ft_putstr(char *s)
{
	int	count;
	int	check;

	if (s == 0)
		return (write(1, "(null)", 6));
	count = 0;
	while (*s)
	{
		check = ft_putchar((int )*s);
		if (check < 0)
			return (-1);
		++s;
		++count;
	}
	return (count);
}
