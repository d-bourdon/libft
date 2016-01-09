/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:50:46 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 16:04:52 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (s && f)
	{
		len = ft_strlen(s);
		str = ft_memalloc(len + 1);
		if (str == NULL)
			return (NULL);
		i = 0;
		while (i < len)
		{
			str[i] = f(s[i]);
			i++;
		}
		str[len + 1] = '\0';
		return (str);
	}
	return (NULL);
}
