/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:07:12 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:53:34 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Character by character scans the string, including the zero byte, to find
** the most recent occurrence of the search character.
**	If found, then returns a pointer to it, otherwise returns a pointer to
** NULL.
*/

char	*ft_strrchr(const char *str, int c)
{
	char const	*sav;

	if (!str)
		return (NULL);
	sav = str + ft_strlen(str);
	while (*sav != c)
	{
		if (sav == str)
		{
			sav = NULL;
			break ;
		}
		sav--;
	}
	return ((char *)sav);
}
