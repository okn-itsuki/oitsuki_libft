/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:35:58 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/29 20:40:20 by oitsuki          ###   ########.fr       */
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
	while (nptr[i] >= 0x09 && nptr[i] <= 0x0D || nptr[i] == ' ')
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
