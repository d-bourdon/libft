/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 10:47:16 by dbourdon          #+#    #+#             */
/*   Updated: 2016/01/05 15:50:25 by dbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*next;
	t_list	*new;
	t_list	*tmp;

	next = lst;
	if (next)
	{
		tmp = f(next);
		new = ft_lstnew(tmp->content, tmp->content_size);
		if (new)
		{
			next = next->next;
			while (next != NULL)
			{
				tmp = f(next);
				ft_lstaddend(&new, tmp);
				next = next->next;
			}
		}
		return (new);
	}
	return (NULL);
}
