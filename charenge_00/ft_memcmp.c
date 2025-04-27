/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:09:12 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/28 06:29:56 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*c1;
	unsigned const char	*c2;

	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (c1[i] == c2[i]))
	{
		if (c1[i] != c2[i])
			break ;
		i++;
	}
	return ((unsigned char)c1[i] - (unsigned char)c2[i]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c1[] = "okunob";
// 	char	c2[] = "okunoa";

// 	printf("%d", ft_memcmp(c1, c2, sizeof(c1)));
// 	return (0);
// }
