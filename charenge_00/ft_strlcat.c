/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 17:35:39 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/27 06:01:48 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static size_t	ft_strnlen(char const *str, size_t maxlen)
// {
// 	char const	*cruunt;

// 	cruunt = str;
// 	while (maxlen-- && *cruunt++)
// 		;
// 	return (str - cruunt);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len + ft_strlen(src) <= size)
		return (len + ft_strlen(src));
	return (len + ft_strlcpy(dst + len, src, size - len));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dst[6] = "okuno";
// 	char	src[] = "sumire";

// 	printf("%ld\n", ft_strlcat(dst, src, sizeof(dst)));
// 	printf("%d\n", strlcat(dst, src, sizeof(dst)));
// 	printf("%s", dst);
// 	return (0);
// }
