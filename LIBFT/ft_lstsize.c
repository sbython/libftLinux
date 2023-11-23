/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:10:56 by msbai             #+#    #+#             */
/*   Updated: 2023/11/23 09:55:39 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *ptr;
    int cont;

    cont = 0;
    ptr = malloc(sizeof(t_list ));
    ptr = lst;
    while(ptr)
    {
        cont++;
        ptr = ptr->next;
    }
    return (cont);   
}