/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:15:12 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/30 16:57:46 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	int		t;
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	t = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = malloc(sizeof(char) * (t + 1))))
		return (NULL);
	res[t] = '\0';
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	free(s1);
	while (s2[j])
	{
		res[i] = s2[j];
		i++;
		j++;
	}
	return (res);
}
