/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:58:19 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 07:35:58 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	str[] = "abcdef123";

// 	printf("%s", ft_strchr(str, 'c'));
// 	return (0);
// }
// mallocで確保したメモリに文字列 *s1 の先頭と末尾から *set で指定された文字が削除されたコピーを返します。
// 資料：https://ttssh2.osdn.jp/manual/4/ja/macro/command/strtrim.html
// s1="1AAA22331122”
// set="1234"
// 戻り値="AAA"
