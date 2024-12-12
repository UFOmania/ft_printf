/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:50:34 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 10:02:59 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int		i;
	char	*null;

	null = malloc(7);
	if (!null)
		return (0);
	null = "(null)";
	i = 0;
	if (!str)
		str = null;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
