/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 09:42:48 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/09 09:42:50 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size_of_concat_str;
	char	*concat_str;
	char	*temp_concat_str;

	size_of_concat_str = strlen(s1) + strlen(s2);
	concat_str = (char *)malloc(sizeof(*concat_str) * (size_of_concat_str + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}
	temp_concat_str = concat_str;
	while (*s1 != '\0')
	{
		*temp_concat_str = *s1;
		temp_concat_str++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*temp_concat_str = *s2;
		temp_concat_str++;
		s2++;
	}
	*temp_concat_str = '\0';
	return (concat_str);
}
