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

#include <stdio.h>
#include <string.h>
size_t ft_strlen(const char *s)
{
    int len = 0;
    while (*s != '\0')
    {
      len++;
      s++;
    }
    return len;
}
char	*ft_strchr(const char *str, int c)
{
	int	idx;

	idx = ft_strlen((char *)str) + 1;
	while (idx--)
	{
		if (*(str + idx) == c)
			return ((char *)(str + idx));
	}
	return (0);
}
// int main() {
//     const char *str1 = "Hello, World!";
//     char *found1 = ft_strchr(str1, 'o');

//     if (found1 != NULL) {
//         printf("Found 'o' at position %ld\n", found1 - str1);
//     } else {
//         printf("Character not found in str1.\n");
//     }
// }
