/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:49:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/01 07:27:56 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i >= len)
		return (NULL);
	while (s1[--len] && ft_strchr(set, s1[len - 1]))
		;
	result = malloc(sizeof(char) * (len - i + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[i], (len - i + 1));
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	str[] = "okunosumireokuno";
// 	char const	set[] = "";

// 	printf("%s", ft_strtrim(str, set));
// 	return (0);
// }
