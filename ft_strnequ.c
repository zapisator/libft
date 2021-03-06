/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:06:38 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 14:14:28 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	As long as the viewing length is greater than 0 byte by byte, the
** corresponding characters of the two lines are compared until a difference
** is found or the ends of the lines are reached.
**	If a difference has been found, returns the 0, otherwise 1.
*/

int	ft_strnequ(const char *min, const char *sub, size_t len)
{
	return (ft_strncmp(min, sub, len) ? 0 : 1);
}
