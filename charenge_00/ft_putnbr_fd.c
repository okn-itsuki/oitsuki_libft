/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:23:07 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 19:25:06 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;
	long	nb;

	nb = (long)n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	num = (nb % 10) + '0';
	write(fd, &num, 1);
}

// int	main(int ac, char **av)
// {
// 	if (ac < 3)
// 		return (1);
// 	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
// 	return (0);
// }
