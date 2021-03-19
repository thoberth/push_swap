/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:25:27 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/06 11:51:22 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	ch;
	unsigned char	*str;

	i = 0;
	str = (unsigned char*)s;
	ch = c;
	while (n--)
	{
		if (ch == str[i])
			return (&str[i]);
		i++;
	}
	return (NULL);
}
