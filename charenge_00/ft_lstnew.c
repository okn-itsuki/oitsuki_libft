/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okunoitsuki <okunoitsuki@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:59:45 by okunoitsuki       #+#    #+#             */
/*   Updated: 2025/05/03 00:31:37 by okunoitsuki      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *mem;
    mem = malloc(sizeof(t_list));
    if(!mem)
        return(NULL);
    mem->content = content;
    mem->next = NULL;
    return(mem);
}

// #include <stdio.h>

// int main(void)
// {
//     char *str = "Hi, naoki!";
//     t_list *node = ft_lstnew((void *)str);

//     if (node == NULL)
//         return (1);

//     printf("node->content: %s\n", (char *)node->content);
//     printf("node point: %p\n", node);
//     printf("content->content: %p\n", node->content);
//     printf("content: %s\n", (char *)node->content);
//     printf("node->next: %p\n", node->next);
//     printf("node->next->content: %s\n", (char *)node->next->content);

//     free(node);
//     return (0);
// }
