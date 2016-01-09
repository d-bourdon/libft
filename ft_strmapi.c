/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:04:11 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 16:04:34 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			str[i] = f(i, s[i]);
			i++;
		}
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
