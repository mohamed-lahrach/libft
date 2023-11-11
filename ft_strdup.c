/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:24:06 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/07 16:24:11 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	int		len;

	while (src[len])
		len++;
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str);
}
