/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:13:28 by msbai             #+#    #+#             */
/*   Updated: 2023/11/09 16:47:29 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cont(long int n)
{
	int	i;

	i = 0;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	num;
	char		*ptr;

	num = n;
	len = 0;
	if (num < 0)
	{
		num *= -1;
		len = 1;
	}
	len += cont(num);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr = ft_strnub(n, ptr, len);
	ptr[len] = '\0';
	return (ptr);
}
