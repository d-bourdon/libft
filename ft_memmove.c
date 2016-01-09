/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:02:53 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/08 14:35:05 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tsrc;
	unsigned char	*tdst;

	tsrc = (unsigned char *)src;
	tdst = (unsigned char *)dst;
	if (dst > src)
	{
		tdst += len;
		tsrc += len;
		while (len)
		{
			*--tdst = *--tsrc;
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
