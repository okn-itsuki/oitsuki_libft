/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:49:29 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/04/29 12:43:29 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    serch_end(char const *s1, char const *set)
{
    size_t i;
    size_t j;
    i = 0;
    while (s1[i])
    {
        j = 0;
        while (s1[i + j] == set[j])
        {
            if ()

            j++;
        }
        i++;
    }
}

char    *ft_strtrim(char const *s1, char const *set)
{

    char *new_str;
    size_t start;
    size_t end;


    new_str = (char *)malloc(); //　lock size
    if(!new_str)
        return(NULL);


}

#include <stdio.h>
int main()
{
    char const str[] = "okuno,sumire123456";
    char const set[] =  ",sumire";

    printf("%s",ft_strtrim(str,set));
    return 0;
}
