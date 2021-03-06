/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:35:39 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 15:14:32 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(long long int c)
{
	int		i;

	i = 1;
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	while (c > 9)
	{
		c /= 10;
		i++;
	}
	return (i);
}
