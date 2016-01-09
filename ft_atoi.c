/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:41:49 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 14:57:40 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_minormore(char c, int *j)
{
	if (c == '-' || c == '+')
	{
		*j = *j + 1;
		if (c == '-')
			return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int		j;
	int		nb;
	int		neg;

	j = 0;
	nb = 0;
	neg = 0;
	while (str[j] == ' ' || str[j] == '	' || str[j] == '\n' || str[j] == '\t'
		|| str[j] == '\r' || str[j] == '\v' || str[j] == '\f')
		j++;
	neg = ft_minormore(str[j], &j);
	while (str[j] != '\0')
	{
		if (str[j] < '0' || str[j] > '9')
			break ;
		else
		{
			nb = (nb * 10) + (str[j] - 48);
			j++;
		}
	}
	if (neg == 1)
		nb = nb * -1;
	return (nb);
}
