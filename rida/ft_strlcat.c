/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:27:53 by msbai             #+#    #+#             */
/*   Updated: 2023/11/05 14:21:56 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int n)
{
	unsigned int	ldest;
	unsigned int	lsrc;
	unsigned int	i;

	ldest = ft_strlen(dest);
	lsrc = ft_strlen(src);
	i = 0;
	if (n == 0 || n <= ldest)
	{
		return (n + ldest);
	}
	while (src[i] && i <= n - ldest - 1)
	{
		dest[i + ldest] = src[i];
		i++;
	}
	dest[i + ldest] = '\0';
	return (ldest + lsrc);
}
