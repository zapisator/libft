/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:59:29 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 13:58:58 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	This is a special case of the function ft_putchar_fd, for which the file
** descriptor parameter is fixed in the state STDOUT == 1.
*/

void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT);
	return ;
}
