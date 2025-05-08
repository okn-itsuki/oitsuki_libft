/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 05:03:27 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/06 07:50:20 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int	main(int ac, char const **av)
// {
// 	if (ac < 3)
// 		return (1);
// 	ft_putchar_fd(av[1][0], atoi(av[2]));
// 	return (0);
// }
