/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:37:24 by msbai             #+#    #+#             */
/*   Updated: 2023/11/01 12:37:29 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_bzero(void *s, int n)
{
	char	*ptr;

	ptr = (char *)s;
	while(n-- > 0)
		*ptr++ = 0;
	return (s);
}