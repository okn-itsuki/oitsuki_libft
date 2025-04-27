/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:11:32 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/25 20:55:35 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", is_space('1'));
// 	printf("%d", is_space('a'));
// 	printf("%d", is_space('A'));
// 	printf("%d", is_space(3));
// 	printf("%d", is_space(1));
// 	printf("%d", is_space(0));
// 	return (0);
// }
