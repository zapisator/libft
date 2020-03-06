/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:57:32 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 14:12:26 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The predicate is correct if the incoming value is uniquely related to the
** letters of the ASCII character set.
*/

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
