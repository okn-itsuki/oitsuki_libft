/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 00:32:18 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/03 01:19:03 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_lstadd_front(t_list **lst, t_list *new)
{
    if( lst || *lst || new  )
    {
        new->next = *lst;
        *lst = new;
    }
}

// #include <stdio.h>
// int main()
// {
//     char    *str = "hi,naoki";
//     t_list  *naoki = ft_lstnew((void *)str);
//     t_list  *naoki_new;

//     if(naoki == NULL)
//         return 1;

//     ft_lstadd_front(&naoki,naoki_new);
//     return 0;
// }
