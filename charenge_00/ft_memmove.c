/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 23:02:53 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 13:04:26 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char const	*s;
	int			direction;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	direction = 1;
	if (d > s)
	{
		direction = -1;
		d += n - 1;
		s += n - 1;
	}
	while (n > 0)
	{
		*(unsigned char *)d = *(unsigned char *)s;
		d += direction;
		s += direction;
		n--;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[20] = "okuno";

// 	ft_memmove(dest + 1, dest, sizeof(dest));
// 	printf("%s", dest);
// 	return (0);
// }

// d < s -> direction = 1;
// d > s -> direction = -1;

// #include <stdio.h>

// int	main(void)
// {
// 	char	src1[6] = "Hello";
// 	char	src2[6] = "Hello";
// 	char	dest2[6] = "*****";
// 	char	src3[6] = "Hello";
// 	char	dest3[6] = "*****";
// 	char	src4[6] = "Hello";
// 	char	dest4[6] = "*****";

// 	// テストケース 1: 同じメモリアドレス
// 	ft_memmove(src1, src1, 5);    // src と dest が同じ
// 	printf("Test 1: %s\n", src1); // "Hello" と表示されるべき
// 	// テストケース 2: メモリが重ならない場合
// 	ft_memmove(dest2, src2, 5);    // 重なりなし
// 	printf("Test 2: %s\n", dest2); // "Hello" と表示されるべき
// 	// テストケース 3: コピー先がコピー元より前にある場合（重なりがある）
// 	// ft_memmove(src3 + 3, src3, 6); // 重なりあり、コピー先が前
// 	ft_memmove(src3 + 3, src3, sizeof(src3) - 1); // 重なりあり、コピー先が前
// 	printf("Test 3: %s\n", src3 + 3);
// 	printf("%s\n", src3 + 9); // "*Hel*o" と表示されるべき
// 	// テストケース 4: コピー先がコピー元より後ろにある場合（重なりがある）
// 	ft_memmove(dest4 + 2, src4, 5); // 重なりあり、コピー先が後ろ
// 	printf("Test 4: %s\n", dest4);  // "**Hel" と表示されるべき
// 	return (0);
// }
