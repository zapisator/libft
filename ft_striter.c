/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 15:03:21 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 12:47:43 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	For each element of the string str applies the function passed by reference.
**	Returns void.
*/

void	ft_striter(char *str, void (*fptr)(char *))
{
	if (str && fptr)
	{
		while (*str != '\0')
		{
			(*fptr)(str);
			str++;
		}
	}
	return ;
}
