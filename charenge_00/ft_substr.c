/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:36:22 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/01 15:24:48 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mem;
	size_t	s_len;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len || !len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (i < len)
	{
		mem[i] = s[start + i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*boom1;
// 	char	*boom2;
// 	char	*boom3;
// 	char	*boom4;

// 	str = "helloworld";
// 	// 1. 範囲外アクセス → Segfault狙い
// 	boom1 = ft_substr(str, 100, 5);
// 	printf("boom1: %s\n", boom1); // 未定義領域読む → 死ぬ可能性あり
// 	free(boom1);                  // NULLをfreeすると未定義動作
// 	// 2. len長くしすぎて過剰読み取り
// 	boom2 = ft_substr(str, 5, 1000);
// 	printf("boom2: %s\n", boom2); // ゴミ or Segfault
// 	free(boom2);
// 	// 3. NULL文字列を渡して確定クラッシュ🔥
// 	boom3 = ft_substr(NULL, 0, 5);
// 	printf("boom3: %s\n", boom3); // ft_substrがNULLチェックしてなければ即死
// 	free(boom3);
// 	// 4. ft_substrがNULL返してきたのに比較して爆死
// 	boom4 = ft_substr(str, 5000, 5);
// 	if (boom4 && boom4[0] == 'X') // NULLポインタにアクセス
// 		printf("boom4 hit!\n");
// 	free(boom4);
// 	return (0);
// }
