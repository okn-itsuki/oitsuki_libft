/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 07:59:42 by oitsuki           #+#    #+#             */
/*   Updated: 2025/04/30 17:15:55 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size != 0 && nmemb > ~0ul / size)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*p;
// 	int		*pp;
// 	int		i;

// 	p = (char *)ft_calloc(4, sizeof(char));
// 	p[0] = 'a';
// 	p[1] = 'a';
// 	p[2] = 'a';
// 	p[3] = '\0';
// 	printf("%s\n", p);
// 	i = 6;
// 	pp = (int *)ft_calloc(i, sizeof(int));
// 	while (i--)
// 		printf("%d", pp[i]);
// 	return (0);
// }
