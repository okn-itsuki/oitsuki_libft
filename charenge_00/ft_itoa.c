/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:37:18 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 07:37:49 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digit(long nbr)
{
	size_t	count;

	count = 1;
	if (nbr <= 0)
		nbr = -(nbr);
	while (nbr >= 10)
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

	num = n;
	digit = count_digit(num);
	str = (char *)malloc(sizeof(char) * (digit + (num < 0) + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = -(num);
	}
	while (digit--)
	{
		str[digit + (num < 0) + 1] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = ft_itoa(-2147483648);
// 	if (s)
// 	{
// 		printf("%s\n", s);
// 		free(s);
// 	}
// 	return (0);
// }
