/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 13:28:37 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/22 16:19:54 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;
	size_t		i;

	src = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(src + i) == (char)c)
			return ((void *)src + i);
	return (NULL);
}

// int main()
// {
//     const char str[] = "shehani";
//     const char ch = 'e';
//     char *result;

//     result = ft_memchr(str, ch, 3);
//     printf("String after character is %s\n", result);

//     return (0);
// }
