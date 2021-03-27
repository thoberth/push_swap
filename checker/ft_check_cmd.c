/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_cmd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:08:15 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/26 15:23:03 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		ft_isknow(char *s)
{
	if (ft_strncmp(s, "pa", 2) == 0)
		return (0);
	else if (ft_strncmp(s, "pb", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "sa", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "sb", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "ss", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "ra", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "rb", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "rr", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "rra", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "rrb", ft_strlen(s)) == 0)
		return (0);
	else if (ft_strncmp(s, "rrr", ft_strlen(s)) == 0)
		return (0);
	else
		return (1);
}

int		ft_check_cmd(char **tab_s)
{
	int i;

	i = 0;
	while (tab_s[i])
	{
		if (ft_isknow(tab_s[i]))
			return (1);
		i++;
	}
	return (0);
}
