/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 05:47:09 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/30 12:45:42 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (1)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		if (len == (size_t)c)
			break ;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "AABCEFD1A3";

// 	printf("%s", ft_strrchr(c, 'A'));
// 	return (0);
// }
