/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:58:35 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 11:35:12 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The predicate is correct if this variable is a member of a subset of
** digits of the ASCII set.
*/

int	ft_isdigit(int c)
{
	return (('0' <= c) && (c <= '9') ? 1 : 0);
}
