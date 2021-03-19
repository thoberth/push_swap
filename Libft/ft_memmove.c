/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:12:47 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 16:07:35 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int					i;
	unsigned char		*d;
	unsigned char		*s;
	char				tmp;

	if (!(dst) && !(src))
		return (NULL);
	i = 0;
	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	if (s > d)
	{
		while (n--)
		{
			tmp = s[i];
			d[i++] = tmp;
		}
		return (dst);
	}
	while (n--)
	{
		tmp = s[n];
		d[n] = tmp;
	}
	return (dst);
}
