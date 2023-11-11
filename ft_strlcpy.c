/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:13:11 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/04 15:13:14 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	offset;

	offset = 0;
	if (dstsize > 0)
	{
		while (*(src + offset) != '\0')
		{
			if (offset == dstsize)
			{
				offset--;
				break ;
			}
			*(dst + offset) = *(src + offset);
			offset++;
		}
	}
	*(dst + offset) = '\0';
	while (*(src + offset) != '\0')
		offset++;
	return (offset);
}
