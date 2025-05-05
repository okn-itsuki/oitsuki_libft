/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:23:23 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/05 06:43:46 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int	main(int ac, char const **av)
// {
// 	if (ac > 2)
// 		return (1);
// 	printf("%ld", strlen(av[1]));
// 	return (0);
// }
