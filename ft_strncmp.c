/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:08:30 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/06 18:16:01 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2 || *s1 == '\0')
		{
			return ((unsigned char)(*s1) - (unsigned char)(*s2));
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
