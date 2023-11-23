/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:26:41 by msbai             #+#    #+#             */
/*   Updated: 2023/11/23 09:55:34 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list *ptr;

    ptr = malloc(sizeof(t_list ));
    ptr = lst;
    while(ptr->next)
        ptr = ptr->next;
    return (ptr);   
}