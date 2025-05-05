/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:34:21 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/04 21:34:50 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list	*tmp;

	if ( !lst || !*lst || !del )
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
