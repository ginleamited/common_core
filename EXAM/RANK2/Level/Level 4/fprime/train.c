/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicomlan <gicomlan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:38:53 by gicomlan          #+#    #+#             */
/*   Updated: 2024/08/19 16:40:23 by gicomlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static void	ft_prime(int number)
{
	static int	prime;

	prime = 0x2;
	if (number == 0x1)
	{
		printf("1");
		return ;
	}
	while (prime <= number)
	{
		if ((number % prime) == 0x0)
		{
			printf("%d", prime);
			if (number != prime)
				printf("*");
			number /= prime;
		}
		else
			prime++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0x2)
		ft_fprime(atoi(argv[0x1]));
	printf("\n");
	return (EXIT_SUCCESS);
}
