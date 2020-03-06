/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:08:00 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 12:56:24 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	If this is a lowercase letter subset character of an ASCII set, the
** function converts it to the corresponding uppercase letter, otherwise it
** returns the character itself.
*/

int	ft_toupper(int c)
{
	return (c -= (ft_islower(c) ? ('a' - 'A') : 0));
}
