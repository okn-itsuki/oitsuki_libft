/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:49:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/30 13:45:13 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*result;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	if (len == 0)
		return (NULL);
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]))
		len--;
	result = (char *)malloc((len - i + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, &s1[i], sizeof(result) + 1);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	str[] = "okuno.sumire.okuno";
// 	char const	set[] = "okuno";

// 	printf("%s", ft_strtrim(str, set));
// 	return (0);
// }
