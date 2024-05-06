/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:34:44 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/28 12:40:37 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*new;

	l = 0;
	i = 0;
	new = malloc(((ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1)
			* sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[l] != '\0')
	{
		new[i] = s2[l];
		l++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

// int main ()
// {
//     char const s1[] = "ha";
//     char const s2[] = "ha";
//     char *result = ft_strjoin(s1, s2);
//     printf("%s\n", result);
//     free (result);
// }
