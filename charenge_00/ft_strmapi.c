/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 03:16:46 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 04:45:45 by oitsuki          ###   ########.fr       */
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
	unsigned int	i;

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
