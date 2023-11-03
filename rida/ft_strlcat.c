/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:27:53 by msbai             #+#    #+#             */
/*   Updated: 2023/11/03 10:34:51 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int n)
{
    unsigned int ldest = ft_strlen(dest);
    unsigned int lsrc = ft_strlen(src);
    int i = 0;
    if (n == 0 || n <= ldest)
    {
        return (n + ldest);
    }
    while (src[i] && i <= n - ldest - 1 )
    {
        dest[i + ldest] =  src[i];
        i++;
    }
    dest[i + ldest] =  '\0';
    return (ldest + lsrc);
}
