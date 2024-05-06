/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:41:33 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/27 17:40:16 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0] && (needle_len + i) <= len)
		{
			if (ft_memcmp(haystack + i, needle, needle_len) == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	const char *hey = "Shehani";
// 	const char *ned = "he";
// 	size_t i = 2;

// 	printf("%s\n", ft_strnstr(hey, ned, i));
// }
