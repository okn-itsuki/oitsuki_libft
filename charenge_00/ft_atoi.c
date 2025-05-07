/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:35:58 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 18:03:28 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	long int		nb;
	int				flag;

	i = 0;
	nb = 0;
	flag = 1;
	while ((nptr[i] >= (char)9 && nptr[i] <= (char)13) || nptr[i] == (char)32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			flag = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nb = 10 * nb + (nptr[i] - '0');
		i++;
	}
	return (nb * flag);
}

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	if (ac < 2)
// 		return (1);
// 	printf("ft :%d\n", ft_atoi(av[1]));
// 	printf("std :%d\n", atoi(av[1]));
// 	return (0);
// }
