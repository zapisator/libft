/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftothmur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/10 12:16:24 by ftothmur          #+#    #+#             */
/*   Updated: 2019/02/18 14:06:51 by ftothmur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The function specified by the exponent pow number multiplies the number
** specified by the exponent base.
**	The function is unsafe in terms of the difficulty of controlling buffer
** overflow.
*/

int	ft_power(int base, int pow)
{
	int	res;

	res = base;
	if (pow == 0)
		return (1);
	if (res == 0)
		return (0);
	while (pow-- > 1)
		res *= base;
	return (res);
}
