/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 14:51:00 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/17 08:55:25 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			bytes;
	unsigned char	*ptr;

	i = 0;
	bytes = count * size;
	if (!(ptr = (unsigned char *)malloc(bytes)))
		return (NULL);
	while (i < bytes)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
