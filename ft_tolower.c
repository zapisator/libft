/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:07:44 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 12:20:30 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	If it is a symbol of a subset of capital letters of an ASCII set, the
** function converts it to the appropriate lower-case letter, otherwise it
** returns the character itself.
*/

int	ft_tolower(int c)
{
	return (c += ((ft_isupper(c) ? ('a' - 'A') : 0)));
}
