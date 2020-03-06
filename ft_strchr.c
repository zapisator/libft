/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:01:56 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:52:32 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Character by character scans the string, including the zero byte, until
** it finds the character it is looking for.
**	If found, then returns a pointer to it, otherwise returns a pointer to NULL.
*/

char	*ft_strchr(const char *str, int c)
{
	if (str)
	{
		while (*str != c)
		{
			if (*str == '\0')
			{
				str = (c == '\0') ? str : NULL;
				break ;
			}
			str++;
		}
	}
	return ((char *)str);
}
