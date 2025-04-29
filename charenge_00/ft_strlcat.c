/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:35:39 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/29 17:14:01 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len + ft_strlen(src) >= size)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy(dst + len, src, size - len));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// char	dst1[20] = "okuno";
// char	src1[] = "itsuki";
// printf("sizeof dst :%lu\n\n",sizeof(dst1));
// printf("ft_strlcat:%lu\n", ft_strlcat(dst1, src1, sizeof(dst1)));
// printf("%s\n\n", dst1);

// char	dst2[20] = "okuno";
// char	src2[] = "sumire";
// printf("std_strlcat:%lu\n", strlcat(dst2, src2, sizeof(dst2)));
// printf("%s\n\n", dst2);

// 	return (0);
// }
