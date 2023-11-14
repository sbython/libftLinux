/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:20:58 by msbai             #+#    #+#             */
/*   Updated: 2023/11/09 23:28:59 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		aree[256];
	int		i;
	char	*ptr;
	int		len;

	i = 0;
	if (!*s1)
		return (0);
	if (!*set)
		return ((char *)(s1));
	ft_bzero(aree, sizeof(int) * 256);
	while (set[i])
		aree[(int)set[i++]] = 1;
	i = 0;
	while (aree[(int)s1[i]] && s1[i])
		i++;
	len = ft_strlen(s1);
	while (aree[(int)s1[len - 1]] && len > 0)
		len--;
	if (!len)
		return ((char *)malloc(1));
	ptr = (char *)malloc(sizeof(char) * (len - i + 1));
	ft_memcpy(ptr, (s1 + i), len - i);
	ptr[len + i] = '\0';
	return (ptr);
}
