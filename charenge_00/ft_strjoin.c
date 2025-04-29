/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:16:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/29 01:47:29 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *mem;
    size_t total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
    mem = (char *)malloc(total_len * sizeof(char));
    if (!mem)
        return(NULL);
    ft_strlcpy(mem, s1 ,total_len);
    ft_strlcat(mem, s2 ,total_len);
    return (mem);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "itstuki🍌";
//     char s2[] = "seto🍌";
//     printf("%s",ft_strjoin(s1,s2));
//     return 0;
// }
