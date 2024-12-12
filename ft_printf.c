/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:53:04 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 09:33:28 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	operate(char c, va_list ap)
{
	int	return_value;

	return_value = 0;
	if (c == '%')
		return_value += ft_putchar('%');
	else if (c == 'c')
		return_value += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		return_value += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		return_value += ft_putnbr(va_arg(ap, int));
	else if (c == 'p')
		return_value += ft_putaddress(va_arg(ap, void *));
	else if (c == 'u')
		return_value += ft_putunbr(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		return_value += ft_puthex(va_arg(ap, int), c);
	return (return_value);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		return_value;

	return_value = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%' && *str)
			return_value += operate(*(++str), ap);
		else
			return_value += ft_putchar(*str);
		str++;
	}
	va_end(ap);
	return (return_value);
}
