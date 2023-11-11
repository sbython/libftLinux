/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:55:28 by msbai             #+#    #+#             */
/*   Updated: 2023/11/09 14:05:26 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src, size_t n)
{
	size_t	ldest;
	size_t	i;

	ldest = ft_strlen(dest);
	i = 0;
	if (n == 0 || n <= ldest)
	{
		return (dest);
	}
	while (src[i] && i < n - ldest - 1)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (dest);
}
