/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 22:23:02 by jilin             #+#    #+#             */
/*   Updated: 2024/11/07 01:28:21 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_0xputpointerhex(unsigned long nb, int flag)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	count += ft_putpointerhex(nb, flag);
	return (count);
}
//* DEBUGGING
// if nb == 0, then print 0x the adress and 0

//* EXPLANATION
//print the mem address of a pointer in hex format
//nb : printed in hex
//flag : lower or uppercase
//0x is the start of a hex adress

int	ft_putpointerhex(unsigned long nb, int flag)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (flag == 1)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_putpointerhex((nb / 16), flag);
		count += ft_putchar(base[nb % 16]);
	}
	else
		count += ft_putchar(base[nb % 16]);
	return (count);
}
//* DEBUGGING

//* EXPLANATION
//print a nb in hex format
//divide recursively each nb then modulo in reverse 
//after each nb being divided, so first modulo the 
//smallest number, last modulo the biggest number
//When go out from nb >= 16 then modulo the smallest number

int	ft_putnbrhex(unsigned int nb, int flag)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (flag == 1)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_putpointerhex((nb / 16), flag);
		count += ft_putchar(base[nb % 16]);
	}
	else
		count += ft_putchar(base[nb % 16]);
	return (count);
}
//* DEBUGGING

//* EXPLANATION:
//print a nb in hex format depend upper or small case
//divide recursively each nb then modulo in reverse 
//after each nb being divided, so first modulo the 
//smallest number, last modulo the biggest number
//When go out from nb >= 16 then modulo the smallest number