/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:22:59 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/17 19:00:27 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	unsigned char	*ldst;
	unsigned char	*lsrc;
	size_t			tn;

	i = 0;
	uc = (unsigned char)c;
	ldst = (unsigned char *)dst;
	lsrc = (unsigned char *)src;
	tn = n;
	while (i < tn)
	{
		ldst[i] = lsrc[i];
		if (lsrc[i] == uc)
		{
			i++;
			return (&ldst[i]);
		}
		i++;
	}
	return (NULL);
}
