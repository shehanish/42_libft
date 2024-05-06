/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:56:24 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/28 12:41:52 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count_digits(int n)
{
	unsigned int	digits;

	digits = 0;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

static void	put_nums_into_string(int n, unsigned int digits, char *num_string)
{
	if (n < 0)
	{
		num_string[0] = '-';
		n *= -1;
	}
	num_string[digits] = '\0';
	digits--;
	while (n > 0)
	{
		num_string[digits] = (n % 10) + '0';
		n = n / 10;
		digits--;
	}
}

char	*ft_itoa(int n)
{
	unsigned int	digits;
	char			*num_string;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = count_digits(n);
	num_string = malloc((digits + 1) * sizeof(char));
	if (num_string == NULL)
		return (NULL);
	put_nums_into_string(n, digits, num_string);
	return (num_string);
}

// int main()
// {
//     int num = -76589988;

//     printf("%s\n", ft_itoa(num));

//     return (0);
// }
// // printf("%s\n", ft_itoa(num));
