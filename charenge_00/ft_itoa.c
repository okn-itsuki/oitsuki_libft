/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:37:18 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/30 11:58:34 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digit(int nbr)
{
	size_t	count;

	count = 1;
	if (nbr <= 0)
		nbr = -(nbr);
	while (nbr > 10)
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
	size_t	digit;
	size_t	total_len;

	digit = count_digit(n);
	total_len = digit + (n < 0) + 1;
	str = (char *)malloc(sizeof(char) * total_len);
	if (!str)
		return (NULL);
	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num = -(num);
	}
	while (digit--)
	{
		str[digit + (n < 0)] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = ft_itoa(12345);
// 	if (s)
// 	{
// 		printf("%s\n", s);
// 		free(s);
// 	}
// 	return (0);
// }
