/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 15:51:47 by thoberth          #+#    #+#             */
/*   Updated: 2019/11/02 12:19:37 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_write(char const *s, char c, int i, int j)
{
	char	*str;

	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	if (!(str = malloc(sizeof(char) * (j + 1))))
		return (NULL);
	str[j] = '\0';
	i = i - j;
	j = 0;
	while (s[i] != c && s[i])
	{
		str[j] = s[i];
		i++;
		j++;
	}
	return (str);
}

char	*ft_write_str(char const *s, char c, int a)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (c == s[i] && s[i])
		i++;
	while (j < a)
	{
		if (c == s[i] && s[i])
		{
			j++;
			while (c == s[i] && s[i])
				i++;
		}
		else
			while (c != s[i] && s[i])
				i++;
	}
	j = 0;
	return (ft_write(s, c, i, j));
}

int		ft_count_str(char const *s, char c)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (c != s[i] && s[i])
		{
			nb++;
			while (c != s[i] && s[i])
				i++;
		}
		else
			while (c == s[i] && s[i])
				i++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_str;
	int		i;
	int		a;

	i = ft_count_str(s, c);
	a = 0;
	if (!(tab_str = malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	tab_str[i] = NULL;
	while (a < i)
	{
		tab_str[a] = ft_write_str(s, c, a);
		a++;
	}
	return (tab_str);
}
