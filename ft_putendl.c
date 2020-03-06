/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:00:05 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 13:57:23 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This is a special case of the function ft_putendl_fd, for which the file
** descriptor parameter is fixed in the state STDOUT == 1.
*/

void	ft_putendl(char const *str)
{
	ft_putendl_fd(str, STDOUT);
	return ;
}
