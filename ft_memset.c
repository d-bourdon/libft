/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:21:59 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/03 17:01:59 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*m;

	m = (char*)b;
	i = 0;
	if (len == 0)
		return (b);
	while (i < len)
	{
		m[i] = (char)c;
		i++;
	}
	return (b);
}
