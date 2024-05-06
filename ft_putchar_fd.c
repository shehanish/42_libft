/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:23:41 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/22 16:23:21 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main() {
//     char myChar = 'A';
//     int fileDescriptor = 1;// Example: stdout

//     ft_putchar_fd(myChar, fileDescriptor);

//     return (0);
// }
