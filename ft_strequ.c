/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:03:00 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/07 14:17:13 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Byte by byte the corresponding characters of the two lines are compared,
** until a difference is found or the ends of the lines are reached.
**	If a difference has been found, returns 0, otherwise 1.
*/

int	ft_strequ(const char *min, const char *sub)
{
	return (ft_strncmp(min, sub, MAX_SIZE) ? 0 : 1);
}
