/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:04:15 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/07 14:04:19 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	compare_chars(const char *p, const char *q)
{
	if (*p > *q)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

int	ft_memcmp(const void *s1, const void *s2, int len)
{
	const char	*p;
	const char	*q;
	int			char_compare_status;

	p = s1;
	q = s2;
	char_compare_status = 0;
	if (s1 == s2)
	{
		return (char_compare_status);
	}
	while (len > 0)
	{
		if (*p != *q)
		{
			char_compare_status = compare_chars(p, q);
			break ;
		}
		len--;
		p++;
		q++;
	}
	return (char_compare_status);
}
