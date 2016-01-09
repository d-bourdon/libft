/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:10:00 by dbourdon          #+#    #+#             */
/*   Updated: 2015/11/30 18:49:36 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = ft_strsub(s2, 0, n);
	s1 = ft_strcat(s1, tmp);
	return (s1);
}
