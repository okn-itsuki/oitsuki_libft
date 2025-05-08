/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:35:05 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 22:19:47 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d == s)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <string.h>

// int	main(void)

// {
// 	int i;
// 	char buff_a[10] = "*****";
// 	char buff_b[10] = "*****";
// 	char *a = "aaa";
// 	char *b = "bbbb";

// 	i = 0;

// 	printf("%s\n", (char *)ft_memcpy(buff_a, a, sizeof(a)));
// 	printf("%s\n", (char *)memcpy(buff_a, a, sizeof(a)));
// 	printf("%s\n", (char *)ft_memcpy(NULL, NULL, 0));
// 	printf("%s\n", (char *)memcpy(NULL, NULL, 0));

// 	return (0);
// }
