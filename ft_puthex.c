/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:54:50 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 10:17:10 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	hex_case(char buff[8], int len, char c)
{
	while (len >= 0)
	{
		if (c == 'X' && buff[len] >= 'a' && buff[len] <= 'f')
			ft_putchar(buff[len] - 32);
		else
			ft_putchar(buff[len]);
		len--;
	}
}

int	ft_puthex(unsigned int nbr, char c)
{
	char	digits[9];
	char	*hex_base;
	int		i;
	int		count;

	i = 0;
	while (i < 9)
		digits[i++] = 0;
	i = 0;
	hex_base = "0123456789abcdef";
	if (nbr == 0)
		return (ft_putchar('0'));
	while (nbr > 0)
	{
		digits[i++] = hex_base[nbr % 16];
		nbr /= 16;
	}
	count = i;
	hex_case(digits, i--, c);
	return (count);
}
