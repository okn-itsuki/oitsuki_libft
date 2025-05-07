/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:00:53 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/06 07:51:03 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int	main(int ac, char const **av)
// {
// 	if (ac < 2)
// 		return (1);
// 	printf("%c", ft_toupper(av[1][0]));
// 	printf("%c", toupper(av[1][0]));
// 	return (0);
// }
