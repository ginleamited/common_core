/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:25:10 by jilin             #+#    #+#             */
/*   Updated: 2024/10/28 18:34:10 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= dstsize)
	{
		return (src_len + dstsize);
	}
	else
	{
		while (i < dstsize - dst_len - 1 && src[i])
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	return (src_len + dst_len);
}
// Print src after dst and terminate with \0
// 

// int main(void)
// {
// 	char dst[10] = "sa";
// 	char src[] = "fdf";
// 	size_t destsize = 8;
// 	printf("%zu\n%s\n", ft_strlcat(dst, src, destsize), dst);
// }

// EXPLANATION: