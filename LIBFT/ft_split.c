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

static int	next(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static char	**maloc(char *s, char c)
{
	int		i;
	int		cont;
	char	**ptr;

	cont = 0;
	i = next(s, c);
	while (s[i])
	{
		if (s[i] == c)
		{
			cont++;
			i += next((char *)s + i, c);
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		cont++;
	ptr = (char **)malloc(sizeof(char *) * (cont + 1));
	if (!ptr)
		return (NULL);
	ptr[cont] = NULL;
	return (ptr);
}

static void	freefun(char **ptr, int j)
{
	while (j--)
	{
		free(ptr[j]);
	}
	free(ptr);
}

static void	mall(char **ptr, char *s, char c, int i)
{
	int	start;
	int	j;

	j = 0;
	start = next((char *)s, c);
	while (s[i])
	{
		if (s[i] == c)
		{
			ptr[j] = ft_substr((char *)s, start, i - start);
			if (!ptr[j])
			{
				freefun(ptr, j);
				return ;
			}
			i += next((char *)s + i, c);
			start = i;
			j++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		ptr[j] = ft_substr((char *)s, start, i - start);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s || *s == 0)
	{
		ptr = (char **)malloc(sizeof(char *) * 1);
		if (!ptr)
			return (NULL);
		ptr[0] = NULL;
		return (ptr);
	}
	ptr = maloc((char *)s, c);
	if (!ptr)
		return (NULL);
	mall(ptr, (char *)s, c, next((char *)s, c));
	if (!ptr)
		return (NULL);
	return (ptr);
}
