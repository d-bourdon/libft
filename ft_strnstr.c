/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:41:52 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 18:38:48 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	whilestrnstr(unsigned char *ts1, unsigned char *ts2, int i, int n)
{
	int				j;

	j = 0;
	while (ts2[j] != '\0' && ts2[j] == ts1[i] && i < n)
	{
		i++;
		j++;
	}
	if (ts2[j] == '\0')
		return (1);
	else
		return (0);
}

void		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ts1;
	unsigned char	*ts2;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	ts1 = (unsigned char *)s1;
	ts2 = (unsigned char *)s2;
	i = 0;
	j = 0;
	k = 0;
	if (ts2[0] == 0)
		return (&ts1[k]);
	while (ts1[i] != '\0' && i < n)
	{
		if (ts1[i] == ts2[0])
			if (whilestrnstr(ts1, ts2, i, n))
				return (&ts1[i]);
		i++;
	}
	return (NULL);
}
