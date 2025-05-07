/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:37:18 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 06:42:30 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_len(long nbr)
{
	size_t	count;

	count = 0;
	if (nbr <= 0)
	{
		nbr = -(nbr);
		count++;
	}
	while (nbr)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	num;
	char	*str;
	size_t	len;

	num = n;
	len = count_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -(num);
	}
	while (num)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <limits.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // int	main(void)
// // {
// // 	char	*s;

// // 	s = ft_itoa(-2147483648);
// // 	if (s)
// // 	{
// // 		printf("%s\n", s);
// // 		free(s);
// // 	}
// // 	return (0);
// // }
// void	test(int input, const char *expected)
// {
// 	char	*result;

// 	result = ft_itoa(input);
// 	if (!result)
// 		printf("KO: ft_itoa(%d) returned NULL\n", input);
// 	else if (strcmp(result, expected) != 0)
// 		printf("KO: ft_itoa(%d) => \"%s\" (expected \"%s\")\n", input, result,
// 			expected);
// 	else
// 		printf("OK: ft_itoa(%d) => \"%s\"\n", input, result);
// 	free(result);
// }

// int	main(void)
// {
// 	test(0, "0");
// 	test(1, "1");
// 	test(-1, "-1");
// 	test(9, "9");
// 	test(-9, "-9");
// 	test(10, "10");
// 	test(-10, "-10");
// 	test(12345, "12345");
// 	test(-12345, "-12345");
// 	test(INT_MAX, "2147483647");
// 	test(INT_MIN, "-2147483648");
// 	return (0);
// }
