/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 12:13:22 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/09 13:24:28 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_trimlen(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;
	size_t		end;
	size_t		len;
	size_t		t_len;

	if (!(len = ft_strlen(s1)))
		return (0);
	i = 0;
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	start = i;
	i = 0;
	end = len;
	len--;
	while (len > 0 && ft_isset(s1[len], set))
	{
		i++;
		len--;
	}
	end -= i;
	return ((long)end - (long)start > 0 ? end - start : 0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	len = ft_trimlen(s1, set);
	i = 0;
	j = 0;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	while (j < len)
	{
		str[j] = s1[i + j];
		j++;
	}

}

int				main(void)
{
	printf("-> |%lu|\n", ft_trimlen("", ""));
}
