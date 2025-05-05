/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 10:36:31 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/04 19:21:35 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_isdigit('0'));
// 	printf("%d", ft_isdigit('1'));
// 	printf("%d", ft_isdigit('2'));
// 	printf("%d", ft_isdigit('9'));
// 	printf("%d", ft_isdigit('a'));
// 	printf("%d", ft_isdigit(' '));
// 	return (0);
// }
