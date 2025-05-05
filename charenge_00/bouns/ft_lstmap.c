/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 01:31:03 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/05 21:14:23 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

void *dup_upper(void *content)
{
	char *str = (char *)content;
	char *new = strdup(str);  // strdupでコピー

	for (int i = 0; new[i]; i++)
		if ('a' <= new[i] && new[i] <= 'z')
			new[i] -= 32;  // 大文字に変換！

	return new;
}

// del関数（freeでOK）
void del(void *content)
{
	free(content);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{

    t_list  *newlst;
    t_list  *tmpnode;
    void    *content;

    if(!lst | !f | !del)
        return NULL;

    newlst = NULL;
    while (lst)
    {
        tmpnode = ft_lstnew(f(lst -> content));
        if(!tmpnode)
        {
            ft_lstclear(&newlst,del);
            return NULL;
        }
        ft_lstadd_back(&newlst,tmpnode);
        lst = lst->next;
    }
    return(newlst);
}

int main(void)
{
	t_list *a = ft_lstnew(strdup("hello"));
	t_list *b = ft_lstnew(strdup("world"));
	t_list *c = ft_lstnew(strdup("libft"));

	a->next = b;
	b->next = c;

	t_list *new = ft_lstmap(a, dup_upper, del);

	while (new)
	{
		printf("Mapped: %s\n", (char *)new->content);
		new = new->next;
	}

	// ft_lstclearで両方のリストをちゃんとfreeしてね！
}

