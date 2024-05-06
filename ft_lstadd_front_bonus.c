/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:13:55 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 13:24:48 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst != NULL && new != NULL)
		new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *head = ft_lstnew("World");
//     t_list *new_node = ft_lstnew("Hello");

//     ft_lstadd_front(&head, new_node);

//     t_list *current = head;
//     while(current != NULL)
//     {
//         printf("%s", (char*)current->content);
//         current = current->next;
//     }
//     free(head);
//     free(new_node);

//     return (0);
// }