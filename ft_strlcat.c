/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:27:53 by msbai             #+#    #+#             */
/*   Updated: 2023/11/06 11:15:41 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	ldest;
	size_t	lsrc;
	size_t	i;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	i = 0;
	if (n == 0 || n <= ldest)
	{
		return (n + lsrc);
	}
	while (src[i] && i < n - ldest - 1)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (ldest + lsrc);
}
