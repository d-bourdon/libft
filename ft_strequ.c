/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 18:38:09 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 15:55:16 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	lexicalcy(char const *s)
{
	int		i;
	int		tt;

	i = 0;
	tt = 0;
	while (s[i] != '\0')
	{
		tt += (unsigned int)s[i];
		i++;
	}
	return (tt);
}

int				ft_strequ(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	i = lexicalcy(s1);
	j = lexicalcy(s2);
	if (i == j)
		return (1);
	else
		return (0);
}
