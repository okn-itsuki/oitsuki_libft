/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 05:47:09 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 16:28:43 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s) + 1;
	while (len--)
	{
		if ((unsigned char)s[len] == (unsigned char)c)
			return ((char *)&s[len]);
	}
	return (NULL);
}

//#include <stdio.h>

// int	main(void)
// {
// 	char	c[] = "AABCEFD1A3A";

// 	printf("%s", ft_strrchr(c, ''));
// 	return (0);
// }
