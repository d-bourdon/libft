/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:44:22 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 16:01:43 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	target;
	int		i;

	target = ((char)c);
	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == target)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
