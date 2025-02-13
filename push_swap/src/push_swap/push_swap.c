/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:16:16 by jilin             #+#    #+#             */
/*   Updated: 2025/02/13 22:31:21 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	
	a = NULL;
	b = NULL;
	if (ac == 1 || (ac == 2 && !av[1][0]))
		return (1);
	else if (ac == 2)
		av = ft_split(av[1], ' ');
	init_stack_a(&a, av + 1);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else	sort_stacks(&a, &b);
	}
	free_stack(&a);
	return (0);
}
//* EXPLANATION
//? This program will sort random numbers in ascending order
// 	First, set both pointers in a and b to NULL
//?  If argc is 1, means there is no argument, return 1
//?  If argc is 2, and the first character of the first argument is NULL, return 1
//?  If argc is 2, split the first argument by space and store it in av
//  When we call init_stack_a, it will initialize the stack a, we add 1 to av
//  to skip the program name.
//?  So if the stack is not sorted:
//?  If the stack length is 2, swap the first two elements
//?  If the stack length is 3, sort with the sort_three function
//?  If the stack length is more than 3, sort with the sort_stacks function
//  In the end, free the stack and return 0