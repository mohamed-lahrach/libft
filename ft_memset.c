/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:19:55 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/02 16:20:52 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	value;

	value = (unsigned char)c;
	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = value;
		i++;
	}
	return (b);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	int str[5] = { 1, 2, 3, 4, 5};
// 	ft_memset(str, 1, 3);
// 	printf("%d\n", str[0]);
// 	printf("%d\n", str[1]);
//     printf("%d\n", str[2]);

//     printf("------------\n");
// 	int str1[5] = {1, 2, 3, 4, 5};
// 	memset(str1, 1, 3);
// 	printf("%i\n", str1[0]);
// 	printf("%i\n", str1[1]);
//     printf("%i\n", str1[2]);
// }
