/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:20:28 by skarunat          #+#    #+#             */
/*   Updated: 2023/11/22 16:44:09 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	destlength;
	size_t	srclength;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	destlength = j;
	srclength = ft_strlen(src);
	if (n == 0 || n <= destlength)
		return (srclength + n);
	while (src[i] != '\0' && i < n - destlength - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (destlength + srclength);
}
