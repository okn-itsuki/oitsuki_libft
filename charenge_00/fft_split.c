/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 21:30:42 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/01 22:12:42 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_count(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len])
	{
		if (s[len] == c)
			break ;
		len++;
	}
	return (len);
}

static size_t	mem_count(char const *s, char c)
{
	int		flag;
	size_t	count;

	count = 0;
	flag = 1;
	while (*s++)
	{
		if (flag && *s != c)
		{
			flag = 0;
			count++;
		}
		else if (*s == c)
			flag = 1;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	char	**mem;

	i = 0;
	count = mem_count(s, c);
	mem = (char **)malloc(sizeof(char *) * count);
	while (i < count)
	{
		mem[i] = ft_strndup(s, len_count(s, c));
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char const	*str;
	char		set;
	char		**result;
	int			i;

	str[] = "I_Love_banana_and_sumire";
	set[] = "_";
	result = ft_split(str, set);
	while (result[i])
	{
		printf("%s", result[i]);
		i++;
	}
	return (0);
}
