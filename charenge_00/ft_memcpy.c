/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:35:05 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/28 04:47:02 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void)

// {
// 	int i;
// 	char buff_a[10];
// 	char buff_b[10];
// 	char a[] = "aaa";
// 	char b[] = "bbbb";

// 	i = 0;
// 	ft_memcpy(buff_a, a, sizeof(a));
// 	ft_memcpy(buff_b, b, sizeof(b));
// 	while (i < 10)
// 	{
// 		write(1, &a[i], 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	i = 0;
// 	while (i < 10)
// 	{
// 		write(1, &b[i], 1);
// 		i++;
// 	}
// 	return (0);
// }
