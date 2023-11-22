/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:41:11 by msbai             #+#    #+#             */
/*   Updated: 2023/11/21 21:41:13 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *p;
    p = (t_list *)malloc(sizeof(t_list *));
    if(!p)
        return (NULL);
    p->content= content;
    p->next = NULL;

    return (p);
}