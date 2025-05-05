/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 02:21:02 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/03 04:01:04 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_lstsize(t_list *lst)
{
    int i;
    i = 0;
    if (!lst)
        return (NULL);
    while (lst->next)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
