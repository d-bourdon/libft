/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 20:50:59 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 16:00:11 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lexicalc(char const *s, unsigned int n)
{
	unsigned int	i;
	unsigned int	tt;

	i = 0;
	tt = 0;
	while (s[i] != '\0' && i < n)
	{
		tt += (unsigned int)s[i];
		i++;
	}
	return (tt);
}

int				ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (n == 0)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = lexicalc(s1, n);
	j = lexicalc(s2, n);
	if (i == j)
		return (1);
	else
		return (0);
}
