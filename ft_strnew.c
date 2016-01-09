/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 12:02:49 by dbourdon          #+#    #+#             */
/*   Updated: 2015/12/17 19:04:54 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(size + 1);
	if (str != NULL)
	{
		ft_bzero(str, size + 1);
		return (str);
	}
	return (NULL);
}
