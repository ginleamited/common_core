/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:21:43 by jilin             #+#    #+#             */
/*   Updated: 2024/12/10 16:26:26 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

//* MAIN
// int	main(void)
// {
// 	printf("%c\n", ft_toupper('b'));
// 	printf("%c\n", toupper('b'));
// }

//* EXPLANATION:
// put the letters in capital case