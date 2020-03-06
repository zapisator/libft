/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 08:47:38 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/11 10:30:34 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The function accepts a signed integer to convert it to a character string
** representing the number in the decimal number system. The result of the
** conversion is written to the file indicated by the file descriptor passed
** by the second argument. Heap operations are prohibited.
**	Returns void.
*/

void		ft_putnbr_fd(int nbr, int fd)
{
	char	str[12];

	ft_bzero(str, 12);
	ft_putstr_fd((char const *)ft_itostr(nbr, str), fd);
	return ;
}
