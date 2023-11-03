/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:04:06 by msbai             #+#    #+#             */
/*   Updated: 2023/11/02 08:46:24 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int strlcpy(char *dest, const char *src, unsigned int n)
{
   int len;

   len = 0;
   while (src[len] && --n)
      *dest++ = src[len++];
   *dest = '\0'; 
   while (src[len] && --n)
      len++;
   return len;
}
