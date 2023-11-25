/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msbai <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 22:13:35 by msbai             #+#    #+#             */
/*   Updated: 2023/11/07 10:38:43 by msbai            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *num)
{
	int	i;
	int	res;
	int	sing;

	i = 0;
	res = 0;
	sing = 1;
	while ((num[i] >= 9 && num[i] <= 13) || num[i] == 32)
	{
		i++;
	}
	if (num[i] == '-')
	{
		i++;
		sing = -1;
	}
	else if (num[i] == '+')
		i++;
	while (num[i] <= '9' && num[i] >= '0')
		res = (res * 10) + num[i++] - '0';
	return (res * sing);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("%d\n", ft_atoi("6549\n"));
// 	printf("%d\n", ft_atoi("0\n"));
// 	printf("%d\n", ft_atoi("-6549\n"));
// 	printf("%d\n", ft_atoi("gg\n"));
// 	printf("%d\n", ft_atoi("  -ef\n"));
// 	printf("%d\n", ft_atoi("+132tgr34\n"));
// 	printf("%d\n", ft_atoi(""));
// 	//printf("%d\n", ft_atoi(NULL));
// 	//printf("%d\n", atoi(NULL));
// }