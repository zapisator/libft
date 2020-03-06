/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 20:40:50 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 13:09:39 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if the given variable can be mapped to one
** character of the ASCII set, namely: horizontal or vertical tabulation, line
** feed, space, carriage return, page feed.
*/

int	ft_isspace(int c)
{
	return ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\f') || \
			(c == '\r') || (c == ' '));
}
