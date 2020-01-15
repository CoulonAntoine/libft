/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 06:52:42 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/15 07:52:14 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstcpy;
	t_list	*el;
	t_list	*elcpy;

	if (!lst || !f || !del)
		return (NULL);
	if (!(lstcpy = ft_lstnew(lst->content)))
		return (NULL);
	el = lst;
	elcpy = lstcpy;
	while (el->next)
	{
		el = el->next;
		if (!(elcpy->next = ft_lstnew(el->content)))
			return (NULL);
		elcpy = elcpy->next;
	}
	return (lstcpy);
}
