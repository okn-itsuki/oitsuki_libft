/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oitsuki <oitsuki@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:49:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/29 17:39:54 by oitsuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;

	new_str = (char *)malloc(); //　lock size
	if (!new_str)
		return (NULL);

    ft_strlcpy();
    
}

#include <stdio.h>

int	main(void)
{
	char const	str[] = "okuno,sumire123456";
	char const	set[] = ",sumire";

	printf("%s", ft_strtrim(str, set));
	return (0);
}
