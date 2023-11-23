/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:11:03 by msbai             #+#    #+#             */
/*   Updated: 2023/11/23 13:40:00 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    t_list *ptr;
    
    ptr = lst;
    if(!lst)
        return ;
    while (lst->next)
    {
        del(lst->content);
        ptr = lst->next;
        free(lst);
        lst = ptr;
    }
}