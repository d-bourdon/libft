/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 15:26:47 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/10 20:22:23 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	tc;
	char	*ts;

	i = 0;
	tc = (char)c;
	ts = (char*)s;
	if (tc == '\0')
		return (&ts[ft_strlen(ts)]);
	while (ts[i] != '\0')
	{
		if (ts[i] == tc)
			return (&ts[i]);
		i++;
	}
	if (ts[i] == tc)
		return (&ts[i]);
	return (0);
}
