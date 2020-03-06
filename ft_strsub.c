/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:30:56 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/17 18:29:44 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates space on the heap and copies into it a portion of the string
** str from the start index with length len.
**	The function handles cases if the string to copy is not passed, or the
** specified section does not exist.
**	If it is, returns a pointer to a copy of the segment, otherwise to NULL.
*/

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char *fshstr;

	fshstr = NULL;
	if (str &&
			(ft_strlen(str) >= start) &&
			(ft_strlen(str + start) >= len) &&
			(fshstr = (char *)ft_memalloc(len + 1)))
	{
		(void)ft_memcpy(fshstr, str + start, len);
		*(fshstr + len) = '\0';
	}
	return (fshstr);
}
