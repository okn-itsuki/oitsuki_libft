/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iokuno <iokuno@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:31:03 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/08 15:38:32 by iokuno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// void	*dup_upper(void *content)
// {
// 	char	*str;

// 	str = (char *)content;
// 	char *new = strdup(str); // strdupでコピー
// 	for (int i = 0; new[i]; i++)
// 		if ('a' <= new[i] && new[i] <= 'z')
// 			new[i] -= 32; // 大文字に変換！
// 	return (new);
// }

// // del関数（freeでOK）
// void	del(void *content)
// {
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmpnode;
	void	*content;

	if (!lst | !f | !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmpnode = ft_lstnew(content);
		if (!tmpnode)
		{
			del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmpnode);
		lst = lst->next;
	}
	return (newlst);
}

// int	main(void)
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;
// 	t_list	*new;

// 	a = ft_lstnew(strdup("hello"));
// 	b = ft_lstnew(strdup("world"));
// 	c = ft_lstnew(strdup("libft"));
// 	a->next = b;
// 	b->next = c;
// 	new = ft_lstmap(a, dup_upper, del);
// 	while (new)
// 	{
// 		printf("Mapped: %s\n", (char *)new->content);
// 		new = new->next;
// 	}
// 	// ft_lstclearで両方のリストをちゃんとfreeしてね！
// }
