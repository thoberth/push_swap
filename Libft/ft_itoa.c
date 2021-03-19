/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thoberth <thoberth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 11:10:44 by thoberth          #+#    #+#             */
/*   Updated: 2019/10/29 12:26:13 by thoberth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_neg(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = ft_strlen(str);
	if (!(str2 = (char*)malloc(sizeof(char) * (i + 2))))
		return (NULL);
	i = 0;
	j = 1;
	str2[i] = '-';
	while (str[i])
	{
		str2[j] = str[i];
		i++;
		j++;
	}
	str2[j] = '\0';
	return (str2);
}

char	*ft_itoa(int n)
{
	char			*rslt;
	int				i;
	int				sign;
	int				a;
	long long int	nbr;

	nbr = n;
	sign = (n < 0) ? 1 : 0;
	nbr = (n < 0) ? -nbr : nbr;
	i = ft_intlen(nbr);
	if (!(rslt = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	a = i;
	while (i >= 0)
	{
		rslt[i - 1] = (nbr % 10) + 48;
		i--;
		nbr /= 10;
	}
	rslt[a] = '\0';
	return (rslt = (sign == 1) ? ft_neg(rslt) : rslt);
}
