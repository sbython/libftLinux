/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:40:12 by msbai             #+#    #+#             */
/*   Updated: 2023/11/06 12:23:41 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((char *)(&s[ft_strlen(s)]));
	while (s[i])
	{
		if ((unsigned char )c == s[i])
			return ((char *)(&s[i]));
		i++;
	}
	return (NULL);
}
