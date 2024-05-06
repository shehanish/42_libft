/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:03:19 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/27 16:57:25 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		length;
	char	*new;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	length = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (length + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[length] = '\0';
	return (new);
}

// int main()
// {
//     char const s[] = "shehani";
//     char *result = ft_strmapi(s, ft_toupper);

//     printf("Original: %s\n", s);
//     printf("Modified: %s\n", result);

//     free(result);
//     return(0);
// }
