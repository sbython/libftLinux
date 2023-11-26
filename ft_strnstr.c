/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:40:10 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 15:43:12 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str1, size_t len)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0; 
	
	if(!str && len == 0)
		return ((char *)str);
	if (!*str1)
		return ((char *)str);
	while (len > i && str[i])
	{
		while (str[i + i1] == str1[i1] && str[i + i1] && len > (i + i1))
			i1++;
		if (!str1[i1])
			return ((char *)(str + i));
		i1 = 0;
		i++;
	}
	return (NULL);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *s1 = "oh no not the empty string !";
//  	char *s2 = "rghe";
//  	size_t max = 23;
//  	char *i1 = strnstr("", s2, max);
//  	char *i2 = ft_strnstr("", s2, max);

//  	if (i1 == i2)
// 		printf("hahapwa");
// }