/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:49:57 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/27 18:32:32 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	void	*ret;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	ret = dest;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (ret);
}
// int main()
// {
//     char dst[100];
//     char *src = "Shehani you got this";

//     ft_memcpy(dst, src, strlen(src)+1);
//     printf("copied string is %s", dst);

//     return (0);
// }
