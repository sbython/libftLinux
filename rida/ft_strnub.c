/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:36:37 by msbai             #+#    #+#             */
/*   Updated: 2023/11/09 16:42:31 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnub(long int n, char *s, int len)
{
	long int	num;

	num = n;
	if (n == 0)
	{
		s[0] = '0';
		return (s);
	}
	else if (n < 0)
	{
		s[0] = '-';
		num = -n;
	}
	while (num >= 10)
	{
		s[--len] = (num % 10) + '0';
		num = num / 10;
	}
	s[--len] = (num % 10) + '0';
	return (s);
}
