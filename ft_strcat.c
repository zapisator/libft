/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:01:40 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:49:09 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	A special case of ft_strncat, in which the length indicator does not
** matter.
*/

char	*ft_strcat(char *dst, const char *src)
{
	return (ft_strncat(dst, src, SIZE_MAX - 1));
}
