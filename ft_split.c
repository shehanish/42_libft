/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shkaruna <shkaruna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:25:24 by shkaruna          #+#    #+#             */
/*   Updated: 2023/11/29 12:50:24 by shkaruna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_str(char const *s, char const c)
{
	size_t	i;
	size_t	strcount;

	i = 0;
	strcount = 0;
	if (s[0] != '\0' && s[0] != c)
		strcount++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] && s[i + 1] != c)
			strcount++;
		i++;
	}
	return (strcount);
}

static size_t	count_char(char const *s, char const c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	*newstr(char const *s, char c)
{
	size_t	i;
	size_t	charcount;
	char	*str;

	i = 0;
	charcount = count_char(s, c);
	str = (char *)malloc(sizeof(char) * (charcount + 1));
	if (str == NULL)
		return (NULL);
	while (i < charcount)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	p;
	size_t	strcount;
	char	**ar;

	i = 0;
	p = 0;
	if (s == NULL)
		return (NULL);
	strcount = count_str(s, c);
	ar = (char **)malloc(sizeof(char *) * (strcount + 1));
	if (ar == NULL)
		return (NULL);
	while (i < strcount)
	{
		while (s[p] != '\0' && s[p] == c)
			p++;
		ar[i] = newstr(s + p, c);
		while (s[p] != '\0' && s[p] != c)
			p++;
		i++;
	}
	ar[i] = NULL;
	return (ar);
}

// int main()
//  {
//     // Example string
//     char input[] = "This is a test string";

//     // Character to split on
//     char delimiter = ' ';

//     // Call ft_split
//     char **result = ft_split(input, delimiter);

//     // Check if ft_split was successful
//     if (result == NULL) {
//         printf("ft_split failed\n");
//         return (1);
//     }

//     // Print the 2D array
//     for (int i = 0; result[i] != NULL; i++) {
//         printf("%s\n", result[i]);
//     }

//     // Free the allocated memory
//     for (int i = 0; result[i] != NULL; i++) {
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }
