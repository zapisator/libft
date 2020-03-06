/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:29:15 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/09 14:51:32 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The address of the pointer to the first node in the linked list is passed
** to the function as the first argument, and the pointer to the newly created
** node of the linked list is passed by value as the second argument. It is
** required to make a new node first in the linked list, the parameter of which
** is transferred.
*/

void	ft_lstadd(t_list **head, t_list *new)
{
	if (head && new)
	{
		new->next = *head;
		*head = new;
	}
	return ;
}
