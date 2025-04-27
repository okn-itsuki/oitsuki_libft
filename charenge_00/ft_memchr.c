/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:18:50 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/28 05:45:47 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char const	*str;

	i = 0;
	str = s;
	while (str[i] != '\0' || i < n)
	{
		if (str[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return ((char *)&s[i]);
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
