/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:04:36 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/01 12:42:05 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str <= 32 && *str != '\0')
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	printf("My atoi = %i\n" , ft_atoi("    	o3283"));
// 	printf("Their atoi = %i\n" , atoi("	    p3283"));

// }
