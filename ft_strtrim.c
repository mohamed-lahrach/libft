/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:18:23 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/09 11:18:27 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_set(char c, char const *set)
{
	while (*set && c != *set)
		set++;
	return (c == *set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*result;

	first = 0;
	if (!s1 || !set)
		return (NULL);
	last = ft_strlen(s1);
	while (is_in_set(s1[first], set))
		first++;
	if (first == last)
		return (ft_strdup(""));
	while (is_in_set(s1[last - 1], set))
		last--;
	result = ft_substr(s1, first, last - first);
	if (!result)
		return (NULL);
	return (result);
}
