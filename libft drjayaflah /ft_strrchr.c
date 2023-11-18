/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:41:23 by msbai             #+#    #+#             */
/*   Updated: 2023/11/01 12:41:27 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	int f = 0;
	while(s[i])
	{
		i++;
		if(s[i] == (char)c)
			f = 1;
	}
	if (f == 0)
		return (char *)(0);
	while(s[i] != c && i > 0)
		i--;
	return (char *)(s + i);
}