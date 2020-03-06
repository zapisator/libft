/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 13:36:30 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:16:00 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copies byte-byte, total bytlen bytes, from the string passed in the second
** argument to the string passed in the first argument.
**	Not protected from intersecting lines or the passed string does not ends
** with a '\0', or even arguments exist, or bytlen != 0.
**	Returns a pointer to the first argument.
*/

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst && src && dst != src)
	{
		d = dst;
		s = src;
		while (len-- != 0)
			*d++ = *s++;
	}
	return (dst);
}
