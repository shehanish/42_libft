/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:33:39 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/27 16:57:02 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (source[i] != '\0' && i < (size - 1))
		{
			destination[i] = source[i];
			i++;
		}
		destination[i] = '\0';
	}
	while (source[i])
		i++;
	return (i);
}

// int main()
// {
//     char dest[] = "vodka";
//     char src[] = "annanas";
//     size_t  result = ft_strlcpy(dest, src, 5);
//     size_t  result2 = strlcpy(dest, src, 5);
//     printf("%zu", result);
//        printf("%zu", result2);
// }
