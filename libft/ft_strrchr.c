/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 22:05:55 by jilin             #+#    #+#             */
/*   Updated: 2024/10/22 20:14:58 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i--;
	}
	return (0);
}
// int main(void)
// {
// 	printf("%s\n", ft_strrchr("salutmecjisjdaoijaisd", 'j'));
// 	printf("%s\n", strrchr("salutmecjisjdaoijaisd", 'j'));
// }

// find the last occurence of the letter