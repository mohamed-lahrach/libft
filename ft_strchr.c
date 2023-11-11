/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:19:59 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/03 23:27:47 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	const char	*str1 = "Hello, World!";
// 	char		*found1;

// 	found1 = ft_strchr(str1, '\0');
// 	printf("Here is the string from `%c` : `%s`\n", *found1, found1);

// 	printf("____________________________\n");
// 	const char *str = "Hello, World!";
//     char *found;
//     found = strchr(str, '\0');
// 	printf("Here is the string from `%c` : `%s`\n", *found, found);
// }
