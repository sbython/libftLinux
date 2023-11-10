/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:14:57 by msbai             #+#    #+#             */
/*   Updated: 2023/11/10 21:51:39 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

int count(char *s, char c)
{
    int i;
    int len;
    
    i = 0;
    len = 0;
    if (s[i] == c)
            i++;
    while (s[i])
    {
        while(s[i] != c && s[i])
        {
            i++;
        }
        if (s[i] == c && s[i - 1] != c)
            len++;
        i++;
    }
    if (s[i - 1] == c)
        return len;
    return len + 1;
}
int cnt
char **ft_split(char const *s, char c)
{
    char *ptr;
    int len;

    len = count(s, c);
    ptr = (char *)malloc((len + 1) * sizeof(char));
    
    

}
