/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/07 15:31:28 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/08 10:52:08 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	str_len;
	char	*str;

	if (!s || !len || ft_strlen(s) < start)
		return (NULL);
	i = start;
	j = 0;
	str_len = ft_strlen(s) - start > len ? len : ft_strlen(s) - start;
	if (!(str = (char *)malloc(sizeof(char) * (str_len + 1))))
		return (NULL);
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
