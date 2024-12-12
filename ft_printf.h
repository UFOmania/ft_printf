/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:53:19 by massrayb          #+#    #+#             */
/*   Updated: 2024/12/12 09:49:43 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_digits_count(long digits);
int	ft_putaddress(void *ptr);
int	ft_puthex(unsigned int nbr, char c);
int	ft_putunbr(unsigned int unbr);
int	ft_putnbr(int nbr);
int	ft_putstr(char *str);

#endif