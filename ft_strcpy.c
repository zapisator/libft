/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:02:45 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:42:13 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	Byte byte copies the characters of the source string to the destination
** string until the zero byte is found. After copying the zero byte, the
** function terminates.
**	Returns a pointer to the first argument.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char *sav;

	if (!dst || !src)
		return (NULL);
	sav = dst;
	if (dst != src)
		while ((*dst++ = *src++))
			;
	return (sav);
}
