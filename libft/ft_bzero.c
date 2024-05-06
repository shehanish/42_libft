/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:34:59 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/22 16:13:54 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// an existing object that want to fill with zeroes.The numbers of bytes to fill
void	ft_bzero(void *b, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (n-- > 0)
		*(ptr++) = 0;
}

// int main()
// {
//     char array[10];
//     ft_bzero(array, sizeof(array));

//     for(int i = 0; i < 10; ++i)
//     {
//         printf("%d", array[i]);
//     }
//     return (0);
// }