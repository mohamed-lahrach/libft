/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:14:32 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/05 20:14:34 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*p;
	unsigned char	*is_char_find;

	p = (unsigned char *)s;
	is_char_find = NULL;
	while ((s != NULL) && n > (n - ft_strlen(s)))
	{
		if (*p != (unsigned char)c)
		{
			p++;
			n--;
		}
		else
		{
			is_char_find = p;
			break ;
		}
	}
	return (is_char_find);
}
// #include <stdio.h>

// int main()
// {
//     char *s = "mohamed lahrach";
//     // char *ptr1 = memchr(s,'-',sizeof(s)+14);
//     // if (ptr1 != NULL)
//     // {
//     //     printf ("'c' found at position %ld.\n", ptr1 - s);
//     //     printf ("search character found:  %s\n", ptr1);
//     // }
//     // else
//     // {
//     //     printf ("search character not found\n");
//     // }

//     char *ptr2 = ft_memchr(s,'-',20);
//     if (ptr2 != NULL)
//     {
//         printf ("'c' found at position %ld.\n", ptr2 - s);
//         printf ("search character found:  %s\n", ptr2);
//     }
//     else
//     {
//         printf ("search character not found\n");
//     }
//     return (0);
// }