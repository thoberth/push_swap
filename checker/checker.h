/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 15:46:06 by thoberth          #+#    #+#             */
/*   Updated: 2021/03/23 16:20:56 by thoberth         ###   ########.fr       */
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
	int		t_st2;
}				t_check;

int		ft_check_arg(int ac, char **av, t_check *o);
void	ft_init(t_check *o, int ac);
void	ft_put_stack(t_check *o);
void	pa(t_check *o);
void 	pb(t_check *o);
void	sa(t_check *o);
void	sb(t_check *o);
void	ss(t_check *o);
void	ra(t_check *o);
void	rb(t_check *o);
void	rr(t_check *o);
void	rra(t_check *o);
void	rrb(t_check *o);
void	rrr(t_check *o);


#endif