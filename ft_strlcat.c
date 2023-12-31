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

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int	d_len;
	int	s_len;
	int	offset;
	int	src_index;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	offset = d_len;
	src_index = 0;
	while (*(src + src_index) != '\0')
	{
		*(dst + offset) = *(src + src_index);
		offset++;
		src_index++;
		if (offset == dstsize - 1)
			break ;
	}
	*(dst + offset) = '\0';
	return (d_len + s_len);
}
