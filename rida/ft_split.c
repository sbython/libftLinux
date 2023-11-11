/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:57 by msbai             #+#    #+#             */
/*   Updated: 2023/11/10 21:51:39 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	if (!s[i])
		return (1);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
		{
			i++;
		}
		if (s[i] == c && s[i - 1] != c)
			len++;
		if (s[i])
			i++;
	}
	if (s[i - 1] == c)
		return (len);
	return (len + 1);
}

int	cnt_word(char *s, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		i++;
		j++;
	}
	return (j);
}

int	next(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

void	cpy(char **ptr, char *p, int len, char c)
{
	int	i;

	i = 0;
	while (i < len)
	{
		p += next(p, c);
		ft_memcpy(ptr[i], p, (cnt_word(p, c)) * sizeof(char));
		ptr[i++][cnt_word(p, c)] = 0;
		p += cnt_word(p, c) + 1;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		len;
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	len = count((char *)s, c);
	ptr = (char **)malloc((len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i++] = (char *)malloc((cnt_word(p, c) + 1) * sizeof(char));
		p += cnt_word(p, c) + next(p, c) + 1;
	}
	ptr[i] = (char *)malloc(sizeof(char));
	ptr[i] = 0;
	i = 0;
	p = (char *)s;
	cpy(ptr, (char *)s, len, c);
	return (ptr);
}
