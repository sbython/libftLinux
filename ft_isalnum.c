/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:37:48 by msbai             #+#    #+#             */
/*   Updated: 2023/11/01 12:37:51 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int isalnum (int c)
{
	if((c >= '0' && c <= '9')
	|| (c >= 'A' && c <= 'Z')
	|| (c >= 'a' && c <= 'z'))
		return 1;
	return 0;
}
