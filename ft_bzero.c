/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:15:59 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/05 18:16:02 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <string.h>
// #include <stdio.h>
// #include <strings.h>

// int main()
// {
// 	char tab1[] = "qwertyuiop";
// 	char tab2[] = "qwertyuiop";

// 	ft_bzero(tab1,3);
// 	bzero(tab2,3);

// 	printf("me : `%s`\n",tab1);
// 	printf("their :`%s`",tab2);
// }