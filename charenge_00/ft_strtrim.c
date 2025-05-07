/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:49:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/06 19:40:45 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strrchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}

// int	main(void)
// {
// 	char const	str[] = "okunosumireokuno";s
// 	char const	set[] = "okuno";

// 	printf("%s", ft_strtrim(str, set));
// 	return (0);
// }
// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*res;

// 	s1 = "lorem \n ipsum \t dolor \n sit \t amet";
// 	set = " ";
// 	res = ft_strtrim(s1, set);
// 	printf("Test 1: \"%s\"\n", res);
// 	free(res);
// 	s1 = " lorem ipsum dolor sit amet";
// 	set = "l ";
// 	res = ft_strtrim(s1, set);
// 	printf("Test 3: \"%s\"\n", res);
// 	free(res);
// 	s1 = "          ";
// 	set = " ";
// 	res = ft_strtrim(s1, set);
// 	if (!res)
// 		printf("Test 5: NULL ❌ (Wrong)\n");
// 	else
// 	{
// 		printf("Test 5: \"%s\" ✅ (Should be empty string)\n", res); // ← ""
// 		free(res);
// 	}
// 	return (0);
// }
// ✅ Test 1 相当: スペースをトリム
// ✅ Test 3 相当: "l " をトリム → "orem ipsum dolor sit amet"
// ✅ Test 5 相当: 全部トリムされて "" を返すべき！

// Test 1: "lorem
//  ipsum 		dolor
//  sit 		amet"
// Test 3: "orem ipsum dolor sit amet"
// Test 5: "" ✅ (Should be empty string)
