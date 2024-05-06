/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:31:43 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/27 18:07:32 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = 0;
	while (*s != '\0')
	{
		s++;
		size++;
	}
	while (size >= 0)
	{
		if (*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s--;
		size--;
	}
	return (NULL);
}
// The strrchr() function in C is used to find the last occurrence of a
// character in a given string.