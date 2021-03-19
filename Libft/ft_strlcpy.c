/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 12:49:16 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 17:13:08 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t j;
	size_t i;

	if (!(dst) || !(src))
		return (0);
	j = ft_strlen(src);
	i = 0;
	if (n == 0)
		return (j);
	n--;
	while (n-- && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
