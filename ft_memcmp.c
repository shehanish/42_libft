/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:48:34 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/28 12:31:59 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	i = 0;
	while (n-- > 0)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}

// int main ()
// {
//     //test case one
//     const char *block1 = "Hello";
//     const char *block2 = "Hello";
//     size_t size1 = 5;
//     int result = ft_memcmp(block1, block2, size1);
//     printf("Test case 1: %d\n", result);

//     //test case two
//     const char *block3 = "Hello";
//     const char *block4 = "World";
//     size_t size2 = 5;
//     int result1 = ft_memcmp(block3, block4, size2);
//     printf("Test case 2: %d\n", result);

//     //test case Three
//     const char *block5 = "OpenAI";
//     const char *block6 = "OpenCV";
//     size_t size3 = 5;
//     int result2 = ft_memcmp(block5, block6, size3);
//     printf("Test case 3: %d\n", result2);

//     //test case four
//     const char *block7 = "Hello";
//     const char *block8 = "NULL";
//     size_t size4 = 5;
//     int result3 = ft_memcmp(block7, block8, size4);
//     printf("Test case 4: %d\n", result);

//     //test case five
//     const char *block9 = "";
//     const char *block0 = "";
//     size_t size5 = 0;
//     int result4 = ft_memcmp(block9, block0, size5);
//     printf("Test case 5: %d\n", result);
// }