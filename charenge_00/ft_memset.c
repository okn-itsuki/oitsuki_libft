/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 23:17:27 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/06 07:50:19 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	int		i;
// 	char	a[10];
// 	char	b[10];

// 	i = 0;
// 	ft_memset(a, '1', sizeof(a));
// 	ft_memset(b, '0', sizeof(b));
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
