/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:46:42 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 15:05:08 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*current;
	t_list	*save;

	if (alst)
	{
		current = *alst;
		while (current)
		{
			del(current->content, current->content_size);
			save = current;
			current = current->next;
			free(save);
		}
		*alst = NULL;
	}
}
