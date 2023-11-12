/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:52:51 by mlahrach          #+#    #+#             */
/*   Updated: 2023/11/11 18:52:53 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	is_valid_char(char c, char sep)
{
	return (c != sep);
}

int	count_words(char *str, char c)
{
	int		first_char;
	int		count;
	char	*p;

	first_char = 1;
	count = 0;
	p = str;
	while (*p)
	{
		if (is_valid_char(*p, c))
		{
			if (first_char)
				count++;
			first_char = 0;
		}
		else
			first_char = 1;
		p++;
	}
	return (count);
}
void	free_words_array(char **array_of_words, int num_of_words)
{
	int	i;

	i = 0;
	while (i < num_of_words)
	{
		free(array_of_words[i]);
		i++;
	}
	free(array_of_words);
}

char	**ft_split(char const *s, char c)
{
	int		num_of_words;
	char	**array_of_words;
	int		i;
	int		j;
	int		len_of_word;
	char	*p;

	num_of_words = count_words((char *)s, c);
	printf("\nThere is/are %i word(s)\n------------------", num_of_words);
	array_of_words = (char **)malloc(num_of_words * sizeof(char *));
	if (array_of_words == NULL)
	{
		return (NULL);
	}
	i = 0;
	p = (char *)s;
	len_of_word = 0;
	// memory allocation
	while (i < num_of_words)
	{
		printf("\n%i\n", i);
		while (is_valid_char(*p, c) && *p != '\0')
		{
			len_of_word++;
			p++;
		}
		array_of_words[i] = (char *)malloc((len_of_word + 1) * sizeof(char));
		if (array_of_words[i] == NULL)
		{
			free_words_array(array_of_words, num_of_words);
			return (NULL);
		}
		printf("%i\n", len_of_word + 1);
		i++;
		if (*p != '\0')
			p++;
		len_of_word = 0;
	}
	// filling allocated array
	p = (char *)s;
	i = 0;
	j = 0;
	while (i < num_of_words)
	{
		while (is_valid_char(*p, c) && *p != '\0')
		{
			array_of_words[i][j] = *p;
			printf("'%c' ", *p);
			p++;
			j++;
		}
		printf("\n");
		array_of_words[i][j] = '\0';
		i++;
		if (*p != '\0')
			p++;
		j = 0;
	}
	return (array_of_words);
}
void copy_word(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int	main(void)
{
	char	*str;
	char	sep;
	char	**arr;

	str = "06-01-2001";
	sep = '-';
	arr = ft_split(str, sep);
	for (int i = 0; i < count_words(str, sep); i++)
	{
		printf("\narr[%i] : \"%s\"\n", i, arr[i]);
	}
	return (0);
}
