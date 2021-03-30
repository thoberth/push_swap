/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_issort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 15:47:09 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/30 21:53:35 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_check_issort(int *tab, int t_tab)
{
	int i;

	i = 1;
	while (i < t_tab)
	{
		if (tab[i] < tab[i - 1])
			return (1);
		i++;
	}
	return (0);
}
