/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:48:13 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 16:06:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*dst;
	unsigned char	ch;

	i = 0;
	dst = (unsigned char*)b;
	ch = c;
	while (len--)
	{
		dst[i] = ch;
		i++;
	}
	return (b);
}
