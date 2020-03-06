/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 15:40:33 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/17 17:57:55 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates a place in the heap of len size (len of string) + 1 (for zero
** byte) and fills it with zero bytes.
**	If successful, returns a pointer to the selected array, otherwise NULL.
*/

char	*ft_strnew(size_t len)
{
	char *str;

	str = NULL;
	if ((str = (char *)malloc(len + 1)))
		(void)ft_memset(str, '\0', len + 1);
	return (str);
}
