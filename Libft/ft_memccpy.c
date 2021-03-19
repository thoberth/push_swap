/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:48:35 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 13:39:29 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int				i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	ch;

	if (!(dst) && !(src))
		return (NULL);
	ch = c;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	while (n--)
	{
		d[i] = s[i];
		if (ch == s[i])
			return (&dst[i + 1]);
		i++;
	}
	return (NULL);
}
