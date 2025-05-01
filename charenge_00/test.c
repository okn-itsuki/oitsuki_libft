#include "libft.h"

// static size_t	len_count(char const *s, char c)
// {
// 	size_t	len;

// 	len = 0;
// 	while (s[len])
// 	{
// 		if (s[len] == c)
// 			break ;
// 		len++;
// 	}
// 	return (len);
// }

// int	main(void)
// {
// 	char	str[] = "I__love___nop_and_______naoki_";
// 	char	c;

// 	c = '_';
// 	*str + len_count();
// 	printf();
// 	return (0);
// }

static size_t	*len_count_guruge(char const *s, char c, size_t count)
{
	int		flag;
	size_t	i;
	size_t	j;
	size_t	length;
	size_t	*lengths;

	j = 0;
	i = 0;
	length = 0;
	lengths = (size_t *)malloc((count) * sizeof(size_t));
	if (!lengths)
		return (NULL);
	count = 0;
	flag = 1;
	while (s[i])
	{
		if ((flag) && (*s == c) && (j < count))
		{
			lengths[j] = length;
			j++;
			flag = 0;
		}
		else if (*s != c)
		{
			length++;
			flag = 1;
		}
		i++;
	}
	return (lengths);
}

int	main(void)
{
	char	str[] = "I__love___nop_and_______naoki_";
	char	c;
	size_t	i;
	size_t	*lens;

	i = 0;
	c = '_';
	lens = len_count_guruge(str, c, 4);
	while (i < 4)
	{
		printf("%zu", lens[i]);
		i++;
	}
	free(lens);
	return (0);
}
