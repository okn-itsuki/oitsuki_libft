/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:00:53 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/27 15:53:40 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c + -0x20);
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
