/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:08:52 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/30 14:04:44 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		t;
	char	*dup;

	i = 0;
	t = ft_strlen(s1);
	if (!(dup = malloc(sizeof(char) * (t + 1))))
		return (NULL);
	dup[t] = '\0';
	t -= 1;
	while (i <= t)
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}
