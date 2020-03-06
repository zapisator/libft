/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/05 16:08:37 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/23 13:28:56 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The return value is equal to the minimum of the string length and maximum
** of the size_t size.
*/

size_t	ft_strlen(const char *str)
{
	return (ft_strnlen(str, MAX_SIZE - 1));
}
