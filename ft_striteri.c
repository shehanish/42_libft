/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:11:14 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/22 16:27:13 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// void    funtion(unsigned int i, char *str)
// {
//     printf("my function: index is %d and the str is %s\n, i, str");
// }

// int main()
// {
//    char str[] = "shehani";
//    ft_striteri(str, funtion);
//    printf("The result is %s\n", str);
//    return (0);
// }
