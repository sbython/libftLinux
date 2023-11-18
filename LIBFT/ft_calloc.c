/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:26:42 by msbai             #+#    #+#             */
/*   Updated: 2023/11/06 19:45:00 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	a;

	a = count * size;
	if (count && size && SIZE_MAX / count < size)
		return (NULL);
	ptr = (void *)malloc(a);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (a));
	return (ptr);
}
