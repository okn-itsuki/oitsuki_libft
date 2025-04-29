/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:37:18 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/29 21:54:39 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_digit(int nbr)
{
	size_t	count;

	count = 0;
	if (nbr <= 0)
	{
		nbr = -(nbr);
		count++;
	}
	while (nbr > 0)
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

	digit = count_digit(n);
	if (n == 0)
		str[0] = '0';
	str = (char *)malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	num = n;
	if (n < 0)
	{
		str[0] = '-';
		num = -(num);
		digit++;
	}
	while (n > 0)
	{
		str[--digit] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_itoa(123);
	printf("%s", str);
	free(str);
	return (0);
}
