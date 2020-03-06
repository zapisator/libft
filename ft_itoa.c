/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 18:12:18 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 12:57:14 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The function converts a numeric value into a string of numbers (and
** possibly a sign), symbolizing the decimal representation of this number.
** The resulting string must be stored on the heap and occupy the minimum
** number of bytes.
**	Returns a pointer to a string or to NULL in case of failure.
*/

char	*ft_itoa(int nbr)
{
	char	*str;
	char	s[12];

	str = ft_itostr(nbr, s);
	if ((str = ft_strnew(ft_strlen(s))))
		ft_strcpy(str, s);
	return (str);
}
