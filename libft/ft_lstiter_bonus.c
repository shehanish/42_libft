/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:45 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 13:24:19 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

/*int main() {
	// Example usage: create a linked list and iterate through it
	t_list *head = ft_lstnew("Hello");

	// Add more nodes to the front
	ft_lstadd_front(&head, ft_lstnew("World"));
	ft_lstadd_front(&head, ft_lstnew("from"));
	ft_lstadd_front(&head, ft_lstnew("Greetings"));

	// Print the initial linked list
	printf("Initial linked list: ");
	ft_lstiter(head, printContent);
	printf("\n");

	// Don't forget to free the allocated memory when done!
	while (head != NULL) {
		t_list *temp = head->next;
		free(head);
		head = temp;
	}

	return (0);
}*/