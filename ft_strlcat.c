/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:54:32 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/03 23:16:43 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	idx;
	size_t	src_idx;
	size_t	value;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	else if (size < dest_len)
		value = src_len + size;
	else
		value = src_len + dest_len;
	idx = dest_len;
	src_idx = 0;
	while (src[src_idx] != '\0' && idx < size - 1)
	{
		dest[idx] = src[src_idx];
		src_idx++;
		idx++;
	}
	dest[idx] = '\0';
	return (value);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char dst1[20] = "Hello, ";
//     char src1[] = "world!";
//     size_t result1 = ft_strlcat(dst1, src1, sizeof(dst1));
//     printf("Result: %zu, dst: %s\n", result1, dst1);

//     char dst2[10] = "";
//     char src2[] = "Testing";
//     size_t result2 = ft_strlcat(dst2, src2, sizeof(dst2));
//     printf("Result: %zu, dst: %s\n", result2, dst2);

//     char dst3[10] = "Hello";
//     char src3[] = "";
//     size_t result3 = ft_strlcat(dst3, src3, sizeof(dst3));
//     printf("Result: %zu, dst: %s\n", result3, dst3);

//     char dst4[10] = "Hello";
//     char src4[] = "Testing";
//     size_t result4 = ft_strlcat(dst4, src4, 0);
//     printf("Result: %zu, dst: %s\n", result4, dst4);

//     char dst5[] = "Hello";
//     char src5[] = "Testing";
//     size_t result5 = ft_strlcat(dst5, src5, sizeof(dst5));
//     printf("Result: %zu, dst: %s\n", result5, dst5);

//     char dst6[6] = "Hello";
//     char src6[] = "Testing";
//     size_t result6 = ft_strlcat(dst6, src6, 3);
//     printf("Result: %zu, dst: %s\n", result6, dst6);

//     return (0);
// }
