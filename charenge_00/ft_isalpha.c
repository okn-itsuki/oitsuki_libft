/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 06:10:53 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/07 06:42:36 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>

// int	main(int ac, char const **av)
// {
// 	if (ac < 2)
// 		return (1);
// 	printf("%d", ft_isalpha(ft_atoi(av[1])));
// 	return (0);
// }
