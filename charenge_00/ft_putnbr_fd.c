/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:23:07 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 03:15:34 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*num;

	num = ft_itoa(n);
	ft_putstr_fd(num, fd);
}

// int	main(int ac, char **av)
// {
// 	if (ac < 3)
// 		return (1);
// 	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
// 	return (0);
// }
