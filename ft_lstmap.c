/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 06:42:20 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/10 07:00:49 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*el;
	t_list	*new;

	(*del)(0);
	if (!lst)
		return (NULL);
	el = lst;
	if (!(new = ft_lstnew((*f)(el->content))))
		return (NULL);
	while (el->next)
	{
		if (!(new->next = ft_lstnew((*f)(el->next->content))))
			return (NULL);
		el = el->next;
	}
	return (new);
}
