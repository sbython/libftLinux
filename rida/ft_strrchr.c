/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:41:23 by msbai             #+#    #+#             */
/*   Updated: 2023/11/06 14:17:02 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (c == 0)
		return ((char *)(&s[ft_strlen(s)]));
	while (s[i])
	{
		if (s[i] == (char)c)
			f = 1;
		i++;
	}
	if (f == 0)
		return (0);
	while (s[i] != c && i > 0)
		i--;
	return ((char *)(s + i));
}
