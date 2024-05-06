/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:13:06 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 13:24:23 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL)
	{
		if (del != NULL)
			del(lst->content);
	}
	free(lst);
}

// void delFunction(void *content)
// {
//     free(content);
// }

// int main() {
//     // Example usage: create a linked list and delete a node
//     t_list *head = ft_lstnew("Hello");

//     // Add more nodes to the front
//     ft_lstadd_front(&head, ft_lstnew("World"));
//     ft_lstadd_front(&head, ft_lstnew("from"));
//     ft_lstadd_front(&head, ft_lstnew("Greetings"));

//     // Print the initial linked list
//     printf("Initial linked list: ");
//     t_list *current = head;
//     while (current != NULL) {
//         printf("%s ", (char*)current->content);
//         current = current->next;
//     }
//     printf("\n");

//     // Delete a node from the linked list
//     t_list *nodeToDelete = head->next;  // Delete the second node
//     ft_lstdelone(nodeToDelete, delFunction);

//     // Print the modified linked list
//     printf("Modified linked list: ");
//     current = head;
//     while (current != NULL) {
//         printf("%s ", (char*)current->content);
//         current = current->next;
//     }
//     printf("\n");

//     // Delete the entire linked list
//     ft_lstclear(&head, delFunction);

//     return (0);
// }
// //lst: The node to free.
// //del: The address of the function used to delete
// //the content.