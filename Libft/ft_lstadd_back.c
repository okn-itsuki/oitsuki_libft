/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 02:24:05 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/07 23:36:53 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		end = ft_lstlast(*lst);
		end->next = new;
	}
	else
		*lst = new;
}
// int main()
// {
//     char *str = "hi,nop";
//     t_list *naoki_0;
//     t_list *naoki_1;

//     naoki_0.content = str;
//     naoki_1.content = str;

//     ft_lstadd_back(&naoki_0,naoki_1);

//     return (0);
// }
