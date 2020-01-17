/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:04:36 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/17 08:55:44 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	if (!(str = (char *)malloc(ft_strlen(s1) + sizeof(char))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = (char)s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
