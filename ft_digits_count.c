/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:52:36 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 09:30:15 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_digits_count(long digits)
{
	int	i;

	i = 0;
	if (digits == 0)
		return (1);
	else if (digits == -2147483648)
		return (11);
	else if (digits < 0)
	{
		i++;
		digits *= -1;
	}
	while (digits > 0)
	{
		digits /= 10;
		i++;
	}
	return (i);
}
