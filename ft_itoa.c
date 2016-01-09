/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:08:33 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/09 16:45:17 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	long	tab[4];

	ft_initlongtab(tab, 4);
	tab[0] = n;
	str = ft_strnew(ft_count_nb(n));
	if (tab[0] == 0)
		str[0] = '0';
	if (str == NULL)
		return (NULL);
	if (tab[0] < 0)
	{
		tab[3] = 1;
		tab[0] = tab[0] * -1;
	}
	while (tab[0] > 0)
	{
		tab[2] = tab[0] % 10;
		tab[0] = (tab[0] - tab[2]) / 10;
		str[(tab[1])++] = (char)tab[2] + 48;
	}
	if (tab[3] == 1)
		str[tab[1]] = '-';
	return (ft_revers(str));
}
