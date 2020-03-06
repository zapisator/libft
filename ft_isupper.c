/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:24:06 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 11:44:43 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if this variable is an element of a subset of the
** capital letters of the ASCII set.
*/

int	ft_isupper(int c)
{
	return ((c >= 'A') && (c <= 'Z'));
}
