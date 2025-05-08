/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:35:58 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 22:27:26 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(const char c)
{
	return ((c >= (char)9 && c <= (char)13) || c == (char)32);
}

int	ft_atoi(const char *nptr)
{
	unsigned int	i;
	long int		nb;
	int				sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		nb = 10 * nb + (nptr[i] - '0');
		i++;
	}
	return (nb * sign);
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
