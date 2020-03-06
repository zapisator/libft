/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:15:03 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 11:36:41 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if the given variable is an element of the ASCII
** set.
*/

int	ft_isascii(int c)
{
	return ((0 <= c) && (c <= 127));
}
