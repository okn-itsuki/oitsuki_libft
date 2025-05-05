/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:46:00 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/04 22:02:08 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if(!lst | !f)
        return;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }

}
