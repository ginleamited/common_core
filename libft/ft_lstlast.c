/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jilin <jilin@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:52:50 by jilin             #+#    #+#             */
/*   Updated: 2024/10/30 23:23:55 by jilin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return NULL;
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return lst;
}

//* MAIN

//* EXPLANATION
// We want to find the last node before NULL and return a pointer
// This one differ from lstsize, because it loops to check if 
// there is a next node and stop when the next node is the NULL
// then it will return the lst just before the NULL because
// lst->next is the NULL
//! to be clear, lst is the actual node and lst->next is the next node 