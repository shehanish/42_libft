/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:00:06 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/24 14:15:01 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*srs;
	size_t	i;

	dst = (char *)dest;
	srs = (char *)src;
	i = 0;
	if (dst == srs)
		return (dst);
	if (srs < dst)
	{
		i = n;
		while (i--)
			((char *)dst)[i] = ((char *)srs)[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)srs)[i];
			i++;
		}
	}
	return (dst);
}
