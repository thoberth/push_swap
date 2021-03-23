/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:52:04 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 16:38:49 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int ac, char **av)
{
	int boucle = 1;
	char buf[4096];
	t_check o;
	if (ac == 1)
		return (0);
	else if (ft_check_arg(ac, av, &o))
		return(-1);
	while (boucle)
	{
		read(0, buf, 4096);
		if (ft_strncmp(buf, "pa", 2) == 0)
			pa(&o);
		if (ft_strncmp(buf, "pb", 2) == 0)
			pb(&o);
		if (ft_strncmp(buf, "stop", 4) == 0)
			boucle = 0;
	}
}