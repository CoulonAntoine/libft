/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancoulon <ancoulon@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 21:02:05 by ancoulon          #+#    #+#             */
/*   Updated: 2020/01/14 12:19:47 by ancoulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strndup(char const *str, int len)
{
	int		i;
	char	*cpy;

	if (!(cpy = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static int		ft_word_count(char const *str, char c)
{
	int		i;
	int		in_w;
	int		wc;

	i = 0;
	in_w = 0;
	wc = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			wc += in_w ? 1 : 0;
			in_w = 0;
		}
		else
			in_w = 1;
		i++;
	}
	wc += in_w ? 1 : 0;
	return (wc);
}

static char		*ft_get_word(char const *str, int index, char c)
{
	int		i;
	int		j;
	int		in_w;
	int		wc;

	i = 0;
	in_w = 0;
	wc = 0;
	while (str[i] && wc < index)
	{
		if (str[i] == c)
		{
			wc += in_w ? 1 : 0;
			in_w = 0;
		}
		else
			in_w = 1;
		i++;
	}
	while (str[i] && str[i] == c)
		i++;
	j = i;
	while (str[j] && str[j] != c)
		j++;
	return (ft_strndup(&str[i], j - i));
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		size;
	char	**strs;

	if (!s || !c)
		return (NULL);
	i = 0;
	size = ft_word_count(s, c);
	if (!(strs = malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		if (!(strs[i] = ft_get_word(s, i, c)))
		{
			free(strs)
			return (NULL);
		}
		i++;
	}
	strs[i] = 0;
	return (strs);
}
