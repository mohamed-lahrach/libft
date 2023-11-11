/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:04:23 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/06 22:10:48 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int cnt)
{
	char		*psz_dest;
	const char	*psz_source = (const char *)src;

	psz_dest = (char *)dst;
	if ((psz_dest != NULL) && (psz_source != NULL))
	{
		while (cnt)
		{
			*(psz_dest++) = *(psz_source++);
			--cnt;
		}
	}
	return (dst);
}
// void    *ft_memcpy(void *dst, const void *src, unsigned int cnt)
// {
//     char        *psz_dest;
//     const char    *psz_source = (const char *)src;

//     psz_dest = (char *)dst;
//     if ((psz_dest != NULL) && (psz_source != NULL))
//     {
//         while (cnt)
//         {
//             *(psz_dest) = *(psz_source);
//             int limit = (cnt - strlen(psz_dest) + 1);
//             if(cnt == limit)
//               break;
//             psz_dest++;
//             psz_source++;
//             --cnt;
//         }
//     }
//     return (dst);
// }