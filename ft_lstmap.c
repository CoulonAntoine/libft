/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 06:52:42 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/17 07:46:29 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*el;

	if (!lst || !f || !del)
		return (0);
	if (!(start = ft_lstnew(f(lst->content))))
		return (NULL);
	el = start;
	while (lst->next)
	{
		el = el->next;
		lst = lst->next;
		if (!(el = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
	}
	return (start);
}
