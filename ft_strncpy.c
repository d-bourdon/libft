/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:25:43 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/08 17:41:05 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*tsrc;
	unsigned char	*tdst;

	i = 0;
	j = 0;
	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dst;
	i = ft_strlen(src);
	if (i == 0)
		return (NULL);
	if (i > n)
		i = n;
	while (j < i)
	{
		tdst[j] = tsrc[j];
		j++;
	}
	while (i < n)
		tdst[i++] = '\0';
	dst = (char *)tdst;
	return (dst);
}
