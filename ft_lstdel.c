/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:28:54 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 15:17:39 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The first argument is a pointer to a node in the linked list, and the second
** argument is a pointer to a function for clearing the data contained in this
** node. It is required to free the memory by the pointer to the first node of
** the linked list with the help of the free() function and assign it a NULL
** value. You should also clear the node's data memory using the del() function.
** This should be done for this node and all subsequent ones in the linked list.
*/

void	ft_lstdel(t_list **alst, void (*delptr)(void *, size_t))
{
	if (alst && *alst && delptr)
		while (*alst)
		{
			(*delptr)((*alst)->content, (*alst)->content_size);
			free((*alst));
			(*alst) = (*alst)->next;
		}
	return ;
}
