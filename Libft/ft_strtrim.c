/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:01:27 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/02 14:58:01 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmod(char const *s1, int i, int j)
{
	char	*rslt;
	int		a;
	int		b;

	a = 0;
	b = ft_strlen(s1) - (i + j);
	if ((int)ft_strlen(s1) < (i + j))
	{
		if (!(rslt = malloc(sizeof(char) * 1)))
			return (NULL);
		rslt[0] = '\0';
		return (rslt);
	}
	if (!(rslt = malloc(sizeof(char) * (b + 1))))
		return (NULL);
	rslt[b] = '\0';
	while (a < b)
	{
		rslt[a] = s1[i];
		i++;
		a++;
	}
	return (rslt);
}

int		ft_verif(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, const char *set)
{
	char	*rslt;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_verif(s1[i], set) == 1)
	{
		i++;
	}
	while (ft_verif(s1[j], set) == 1)
	{
		j--;
	}
	j = ft_strlen(s1) - (j + 1);
	rslt = ft_strmod(s1, i, j);
	return (rslt);
}
