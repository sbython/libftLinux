/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:09:06 by msbai             #+#    #+#             */
/*   Updated: 2023/11/07 20:25:51 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *) s;
	if (c == 0)
		return ((void *)(s));
	while (n--)
	{
		if (ptr[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}
