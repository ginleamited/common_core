/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:29:57 by jilin             #+#    #+#             */
/*   Updated: 2024/10/16 22:04:30 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (unsigned char)c)
        {
            return ((char *)s + i);
        }
        if (s[i] == '\0')
        {
            return ((char *)s + i);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    printf("%s\n", ft_strchr("salutmecjisjdaoijaisd", 'j'));
    printf("%s\n", strchr("salutmecjisjdaoijaisd", 'j'));
}