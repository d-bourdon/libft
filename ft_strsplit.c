/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:50:20 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/08 17:41:36 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	d;
	int		start;
	int		end;
	char	**tab;

	i = 0;
	d = 0;
	tab = (char **)malloc(sizeof(*tab) * (ft_strlen(s) / 2 + 2));
	if (tab == NULL)
		return (NULL);
	if (tab != NULL || s[0] != '\0')
		while (s[i] != '\0')
		{
			while (s && s[i] == c)
				i++;
			start = i;
			while (s[i] && s[i] != c)
				i++;
			end = i;
			if (end > start)
				tab[d++] = ft_strsub(s, start, (end - start));
		}
	tab[d] = NULL;
	return (tab);
}
