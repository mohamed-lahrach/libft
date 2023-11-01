/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:51:08 by mlahrach          #+#    #+#             */
/*   Updated: 2023/10/31 18:08:50 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
// #include <stdio.h>
// int main() {
//     const char *myString = "Hello, World!";
//     size_t length = ft_strlen(myString);

//     printf("The length of the string is: %zu\n", length);

//     return 0;
// }
