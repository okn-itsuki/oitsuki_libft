/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:09:08 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/02 10:34:50 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(const char *s, char c)
{
	int		flag;
	size_t	count;

	count = 0;
	flag = 0;
	while (*s++)
	{
		if (!flag && *s != c)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
	}
	return (count);
}

static char	*ft_strndup(const char *s, char len)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char **mem, int i)
{
	while (i--)
		free(mem[i]);
	free(mem);
}

static char	mem_lock(char const *s, char c, char *mem)
{
	size_t	temp_len;
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			temp_len = 0;
			while (s[temp_len] && s[temp_len] != c)
				temp_len++;
			mem[i] = ft_strndup(s, temp_len);
			if (!mem[i])
				return (free_all(&mem, i), NULL);
			i++;
			s += temp_len;
		}
		else
			s++;
	}
	mem[i] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**mem;

	mem = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!mem)
		return (NULL);
	mem_lock(s, c, &mem);
	return (mem);
}

int	main(void)
{
	char const	*str;
	char		set;
	char		**result;
	int			i;

	str = "_____I_Love__banaa_and_naoki";
	set = '_';
	result = ft_split(str, set);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
