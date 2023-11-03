/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:40:12 by msbai             #+#    #+#             */
/*   Updated: 2023/11/03 14:01:45 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;
	while(s[i] != c && s[i])
	{
		i++;
	}
	if(s[i])
		return (char *)(s+i);
	else
		return (0);
}