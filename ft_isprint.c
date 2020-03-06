/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:59:10 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 11:39:27 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if the given variable is an element of the
** printing symbols of the ASCII set.
*/

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
