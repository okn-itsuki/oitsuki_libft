/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:36:22 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/28 18:12:04 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *mem;
    size_t i ;

    if ((len == 0)||(start >= ft_strlen(s)))
        return (NULL);
    mem = (char *)malloc(len * sizeof(char));
    while (i < len - 1 )
    {
        mem[i] = s[start + i];
        i++;
    }
    mem[i] = '\0';
    return(mem);
}

// #include <stdio.h>
// int main()
// {
//     char str[] = "okuno,itsuki";
//     printf("%s",ft_substr(str,7,4));
//     return 0;
// }

