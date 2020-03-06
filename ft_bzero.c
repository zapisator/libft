/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:51:39 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/20 14:23:54 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Assigns '\0' to each element of the string by the number len.
**	Returns void.
*/

void	ft_bzero(void *str, size_t size)
{
	(void)ft_memset(str, '\0', size);
	return ;
}
