/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:14:19 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 13:24:52 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
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