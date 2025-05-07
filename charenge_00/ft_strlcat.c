/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:35:39 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 06:37:24 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_strnlen(char *str, size_t n)
{
	size_t	i;

	i = 0;
	while (str[i] && n--)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	i;

	dest_size = ft_strnlen(dst, size);
	if (dest_size == size)
		return (size + ft_strlen(src));
	i = 0;
	while (src[i] && dest_size + i + 1 < size)
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	if (dest_size + i < size)
		dst[dest_size + i] = '\0';
	return (dest_size + ft_strlen(src));
}
// if (!dst)
// 	return (ft_strlen(src));
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dst1[20] = "okuno ";
// 	char	dst2[20] = "okuno ";
// 	char	src1[] = "sumire";
// 	char	src2[] = "sumire";

// 	printf("ft_strlcat:%zu\n", ft_strlcat(NULL, src1, 0));
// 	printf("%s\n\n", dst1);
// 	printf("std_strlcat:%d\n", strlcat(NULL, src2, 0));
// 	printf("%s\n\n", dst2);
// 	return (0);
// }
