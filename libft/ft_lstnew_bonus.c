/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:59:41 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 13:35:27 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = NULL;
	newnode = (t_list *)malloc(sizeof(t_list));
	if (newnode != NULL)
	{
		newnode->content = content;
		newnode->next = NULL;
	}
	return (newnode);
}

// int main()
// {
//     int *data = (int *)malloc(sizeof(int));
//     *data = 42;

//     t_list *newnode = ft_lstnew(data);
//     printf("content of the new node: %d\n", *(int *)newnode->content);
//     free(data);
//     free(newnode);

//     return (0);
// }
