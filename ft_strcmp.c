/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:13:26 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/11 11:03:08 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				i;
	unsigned char	*ts1;
	unsigned char	*ts2;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	while (ts1[i] != '\0')
	{
		if (ts1[i] == ts2[i])
			i++;
		else if (ts1[i] < ts2[i])
			return (-1);
		else if (ts1[i] > ts2[i])
			return (1);
	}
	if (ts1[i] == '\0' && ts2[i] != '\0')
		return (-1);
	return (0);
}
