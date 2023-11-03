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

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	value;

	value = (unsigned char)c;
	p = b;
	i = 0;
	while (i < len && p[i] != '\0')
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
// 	char str[5] = "abc";
// 	str[0] = 2;
// 	str[1] = 2;
// 	str[2] = 2;
// 	ft_memset(str, 5, 3);
// 	printf("%d\n", str[0]);
// 	printf("%d\n", str[0]);

// }
