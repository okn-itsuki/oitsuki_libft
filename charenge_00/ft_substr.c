/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:36:22 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/29 17:14:09 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	i;

	i = 0;
	if ((len == 0) || (start >= ft_strlen(s)))
		return (NULL);
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (i < len)
	{
		mem[i] = s[start];
		start++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "okuno,itsuki";

// 	printf("%s", ft_substr(str, 7, 4));
// 	return (0);
// }
