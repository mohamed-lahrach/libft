/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:58:22 by mlahrach          #+#    #+#             */
/*   Updated: 2023/10/31 16:13:24 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 177);
}
// #include <stdio.h>
// int main() {
//     char ch1 = 'A';
//     char ch2 = '\x8F'; // Not an ASCII character

//     if (ft_isascii(ch1)) {
//         printf("%c is an ASCII character.\n", ch1);
//     } else {
//         printf("%c is not an ASCII character.\n", ch1);
//     }

//     if (ft_isascii(ch2)) {
//         printf("%c is an ASCII character.\n", ch2);
//     } else {
//         printf("%c is not an ASCII character.\n", ch2);
//     }

//     return 0;
// }
