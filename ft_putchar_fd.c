/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:59:46 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 14:03:13 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The function writes the incoming character to the file defined by the file
** descriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}
