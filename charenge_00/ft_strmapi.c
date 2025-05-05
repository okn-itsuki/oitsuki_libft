/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 03:16:46 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/05 20:00:17 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	f_toupper(unsigned int i, char c)
// {
// 	c = c + i;
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*mem;
	size_t	i;

	i = 0;
	mem = ft_strdup(s);
	if (mem)
	{
		while (mem[i])
		{
			mem[i] = f(i, mem[i]);
			i++;
		}
	}
	return (mem);
}

// int	main(void)
// {
// 	char	str[] = "aaaa";
// 	char	*mem;

// 	mem = ft_strmapi(str, (*f_toupper));
// 	printf("%s", mem);
// 	free(mem);
// 	return (0);
// }
