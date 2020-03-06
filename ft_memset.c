/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 12:59:08 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:13:50 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** If size > 0, writes size characters c to the char array dst.
** Returns a pointer to the first argument.
*/

void	*ft_memset(void *dst, int c, size_t size)
{
	unsigned char	*d;

	if (dst && size)
	{
		d = dst;
		while (size-- != 0)
			*d++ = (unsigned char)c;
	}
	return (dst);
}
