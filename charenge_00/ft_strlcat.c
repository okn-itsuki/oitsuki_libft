/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:35:39 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/05 06:31:09 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

#include <stdio.h>
#include <string.h>

int	main(void)
{
char	dst1[20] = "okuno";
char	dst2[20] = "okuno";
char	src1[] = "sumires";
char	src2[] = "sumires";
printf("ft_strlcat:%lu\n", ft_strlcat(dst1, src1, sizeof(dst1)));
printf("%s\n\n", dst1);
printf("std_strlcat:%lu\n", strlcat(dst2, src2, sizeof(dst2)));
printf("%s\n\n", dst2);

	return (0);
}
