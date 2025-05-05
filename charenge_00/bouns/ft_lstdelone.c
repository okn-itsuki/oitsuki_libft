/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:56:32 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/05 03:13:11 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if(!lst | !del)
        return;
    del(lst->content);
    free(lst);
}

// int main()
// {

//     return 0;
// }
