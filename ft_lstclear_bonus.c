/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <msbai@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:21:38 by msbai             #+#    #+#             */
/*   Updated: 2023/11/24 14:04:42 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dee;
	t_list	*next;

	if (!lst || !del)
		return ;
	dee = *lst;
	while (dee)
	{
		next = dee->next;
		(*del)(dee->content);
		free(dee);
		dee = next;
	}
	*lst = NULL;
}
