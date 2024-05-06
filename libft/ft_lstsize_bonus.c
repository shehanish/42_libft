/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:59:22 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 15:29:57 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != 0)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
//     t_list *head = ft_lstnew("World");
//     t_list *newnode = ft_lstnew("Hello");

//     ft_lstadd_front(&head, newnode);

//     int size = ft_lstsize(head);
//     printf("size of the linked list: %zu\n", size);

//     free(head);
//     free(newnode);
// }