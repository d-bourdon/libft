/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:53:15 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/12 20:54:24 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*ts2;

	i = 0;
	j = 0;
	k = 0;
	ts2 = (char *)s2;
	i = ft_strlen(s1);
	k = ft_strlen(ts2);
	while (j < k)
	{
		s1[i] = ts2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
