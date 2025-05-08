/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:09:08 by oitsuki           #+#    #+#             */
/*   Updated: 2025/05/08 16:50:38 by iokuno           ###   ########.fr       */
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
	while (*s)
	{
		if (!flag && *s != c)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static char	*ft_strndup(const char *s, size_t len)
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
	while (i > 0)
	{
		i--;
		free(mem[i]);
	}
	free(mem);
}

static int	mem_lock(char const *s, char c, char **mem)
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
			{
				free_all(mem, i);
				return (1);
			}
			i++;
			s += temp_len;
		}
		else
			s++;
	}
	mem[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**mem;

	if (!s)
		return (NULL);
	mem = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!mem)
		return (NULL);
	if (mem_lock(s, c, mem))
		return (NULL);
	return (mem);
}
#

// int	main(void)
// {
// 	char const	*str;
// 	char		set;
// 	char		**result;
// 	int			i;

// 	i = 0;
// 	str = "_____I_Love__banaa_and_naoki";
// 	set = '_';
// 	result = ft_split(str, set);
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
