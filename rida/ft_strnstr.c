/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:40:10 by msbai             #+#    #+#             */
/*   Updated: 2023/11/07 14:22:53 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str1, size_t len)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0;
	if (str1 == NULL || str1[0] == '\0')
		return ((char *)str);
	while (len > i && str[i])
	{
		while (str[i + i1] == str1[i1] && str[i + i1] &&  len > (i + i1))
			i1++;
		if (!str1[i1])
			return ((char *)(str + i));
		i1 = 0;
		i++;
	}
	return (NULL);
}
