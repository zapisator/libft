/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:03:35 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 12:46:26 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	For each element of the string str applies the function passed by reference.
**	Returns void.
*/

void	ft_striteri(char *str, void (*fptr)(unsigned int, char *))
{
	size_t index;

	if (str && fptr)
	{
		index = 0;
		while (*str != '\0')
			(*fptr)(index++, str++);
	}
	return ;
}
