/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:26:42 by msbai             #+#    #+#             */
/*   Updated: 2023/11/26 16:31:43 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	a;

	a = count * size;

	if (count && SIZE_MAX / count < size)
		return (NULL);
	ptr = (void *)malloc(a);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, a);
	return (ptr);
}
