/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:03:45 by jilin             #+#    #+#             */
/*   Updated: 2024/10/17 19:16:37 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			((unsigned char *)s)[i] = 0;
			i++;
		}
	}
	else
		return ();
}

int	main(void)
{
	unsigned char	s[];

	s[] = "salut";
	ft_bzero(s, 2);
	printf("%s\n", s + 2);
}
