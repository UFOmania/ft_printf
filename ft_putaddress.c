/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:53:20 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 10:16:54 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	clear_address(char buff[15])
{
	int	i;
	int	j;

	i = 2;
	j = 2;
	while (buff[i] == '0')
		i++;
	while (i < 14 && buff[i])
		buff[j++] = buff[i++];
	while (j < 14)
		buff[j++] = 0;
}

int	ft_putaddress(void *ptr)
{
	unsigned long	address;
	int				index;
	char			buff[15];
	char			*hex_base;

	hex_base = "0123456789abcdef";
	address = (unsigned long)ptr;
	index = 13;
	if (!ptr)
		return (ft_putstr("0x0"));
	buff[0] = '0';
	buff[1] = 'x';
	buff[14] = '\0';
	while (index > 1)
	{
		buff[index] = hex_base[(address % 16)];
		address /= 16;
		index--;
	}
	clear_address(buff);
	return (ft_putstr(buff));
}
