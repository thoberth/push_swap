/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:37:34 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/30 15:15:48 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		return ((char*)s + ft_strlen(s));
	}
	while (s[i] != c && s[i])
		i++;
	if (s[i] == c)
	{
		return ((char *)s + i);
	}
	return (NULL);
}
