/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:18:50 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 06:42:17 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char const	*str;
	char		c_1;

	i = 0;
	c_1 = (char)c;
	str = (char const *)s;
	while (i < n)
	{
		if (str[i] == c_1)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	buf[] = "ABCD5EFGH";
// 	char	*ch;

// 	ch = (char *)ft_memchr(buf, '5', sizeof(buf));
// 	printf("%s\n", ch);
// 	return (0);
// }
