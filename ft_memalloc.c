/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:51:14 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/18 18:10:01 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*tmp;
	int		i;

	i = 0;
	tmp = malloc(size);
	if (tmp == NULL)
		return (NULL);
	bzero(tmp, size);
	return (tmp);
}
