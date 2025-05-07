/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 06:32:13 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/06 07:50:55 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && little[j] && big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*big;
// 	char	*little;

// 	big = "hello world";
// 	little = "world";
// 	printf("%s\n", ft_strnstr(big, little, 11));    // "world"
// 	printf("%s\n", ft_strnstr(big, little, 5));     // NULL
// 	printf("%s\n", ft_strnstr(big, "", 11));        // "hello world"
// 	printf("%s\n", ft_strnstr("", "hello", 5));     // NULL
// 	printf("%s\n", ft_strnstr("abcdef", "abc", 6)); // "abcdef"
// 	printf("%s\n", ft_strnstr("abcdef", "abc", 2)); // NULL
// 	printf("%s\n", ft_strnstr("aaaaab", "ab", 6));  // "ab"
// 	return (0);
// }
