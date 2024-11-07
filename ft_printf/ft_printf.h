/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:34:58 by jilin             #+#    #+#             */
/*   Updated: 2024/11/07 03:10:14 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int	printf_format(char c, va_list args);
int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putunsignednbr(unsigned int nb);
int	ft_0xputpointerhex(unsigned long long nb, int flag);
int	ft_putpointerhex(unsigned long long nb, int flag);
int	ft_putnbrhex(unsigned int nb, int flag);

#endif