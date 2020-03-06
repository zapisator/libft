/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:26:33 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 11:48:02 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if this variable is an element of a subset of the
** characters in lower case letters of the ASCII set.
*/

int	ft_islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}
