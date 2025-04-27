/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:50:11 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/27 20:13:30 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] == s2[i]))
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int ac, char const **av)
// {
// 	if (ac < 4)
// 		return (1);
// 	printf("%d", ft_strncmp(av[1], av[2], atoi(av[3])));
// 	return (0);
// }
