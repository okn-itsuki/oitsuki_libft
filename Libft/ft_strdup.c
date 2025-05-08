/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:42:03 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/08 14:12:02 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t			len;
	unsigned int	i;
	char			*mem;

	len = ft_strlen(s);
	i = 0;
	mem = (char *)malloc(sizeof(char) * len + 1);
	if (!mem)
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

// #include <stdio.h>

// int	main(int ac, char **av)
// {
// 	char	*buff;

// 	if (ac > 2)
// 		return (1);
// 	buff = ft_strdup(av[1]);
// 	printf("%s", buff);
// 	return (0);
// }
