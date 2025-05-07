/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 05:47:09 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/06 19:48:38 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	unsigned char	*s_1;
	char			c_1;

	s_1 = (unsigned char *)s;
	c_1 = (char)c;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (s_1[len] == c_1)
			return ((char *)&s[len]);
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "AABCEFD1A3A";

// 	printf("%s", ft_strrchr(c, NULL));
// 	return (0);
// }
