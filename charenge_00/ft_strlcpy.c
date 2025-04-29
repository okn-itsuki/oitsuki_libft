/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheak_ft_strlcpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:42:28 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/28 22:19:06 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (i < size - 1  && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	size_t	size;
// 	char	dst[20];
// 	char	src[] = "okuon";

// 	size = ft_strlen(src);
// 	printf("ft :%ld\n", ft_strlcpy(dst, src, sizeof(dst)));
// 	printf("%s\n",dst);
// 	printf("std:%ld\n", strlcpy(dst, src, sizeof(dst)));
// 	printf("%s\n",dst);
// 	return (0);
// }
