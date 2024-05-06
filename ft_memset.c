/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:26:55 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/22 16:22:56 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ptr ==> Starting address of memory to be filled
// x   ==> Value to be filled
// n   ==> Number of bytes to be filled starting
//         from ptr to be filled
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}

// int main()
// {
//     char array[10];

//     ft_memset(array, 'A', 10);

//     for(int i = 0; i < 10; ++i)
//     {
//         printf("%c", array[i]);
//     }
//     return (0);
// }
