/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:36:35 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 13:39:17 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	if (!(dst) && !(src))
		return (NULL);
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
