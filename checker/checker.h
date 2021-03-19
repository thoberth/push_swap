/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:46:06 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/19 15:12:50 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CHECKER_H_
#define _CHECKER_H_
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "../Libft/libft.h"

typedef	struct	s_check
{
	int		*stack1;
	int		t_st1;
	int		*stack2;
}				t_check;

int		ft_check_arg(int ac, char **av, t_check *o);
void	ft_init(t_check *o, int ac);

#endif