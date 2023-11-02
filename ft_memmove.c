/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:10:57 by msbai             #+#    #+#             */
/*   Updated: 2023/11/01 21:44:06 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *s = (char *)src;
	char *d = (char *)dest;
	char t[n];
	int i = -1;
	while (i++ < n)
		t[i] = s[i];
	i = -1;
	while(i++ < n)
		d[i] = t[i];
	return (dest);
}
