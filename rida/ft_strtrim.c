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
	if (!s1 || !set)
		return (NULL);
	ft_bzero(aree, sizeof(int) * 256);
	while (set[i])
		aree[(int)set[i++]] = 1;
	i = 0;
	while (aree[(int)s1[i]] && s1[i])
		i++;
	len = ft_strlen(s1);
	
	while (aree[(int)s1[len - 1]] && len > i)
		len--;
	if ((len - i) < 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!ptr)
		return(NULL);
	ft_memcpy(ptr, s1 + i, sizeof(char)*(len - i));
	ptr[len - i] = '\0';
	return (ptr);
}
