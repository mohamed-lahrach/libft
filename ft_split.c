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

int    is_valid_char(char c, char sep)
{
    return (c != sep);
}

int    count_words(char *str, char c)
{
    int    first_char;
    int    count;
    char*    p;

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
char **ft_split(char const *s, char c)
{
    int num_of_words;
    char **array_of_words;
    int i;
    int j;
    int len_of_word;
    char *p;

    num_of_words = count_words((char*)s, c);
    array_of_words = (char **)malloc(num_of_words * sizeof(char *));
    if (array_of_words == NULL) {
        return 0;
    }
    i = 0;
    p = (char*)s;
    len_of_word = 0;
    while (i < num_of_words)
    {
        while(is_valid_char(*p, c) && *p != '\0')
        {
            len_of_word++;
            p++;
        }
        array_of_words[i] = (char *)malloc((len_of_word + 1) * sizeof(char));
        len_of_word = 0;
        i++;
        p++;
    }
    p = (char*)s;
    i = 0;
    j = 0;
    while(i < num_of_words){
        while (is_valid_char(*p, c) && *p != '\0')
        {
            array_of_words[i][j] = *p;
            p++;
            j++;
        }
        j++;
        array_of_words[i][j] = '\0';
        p++;
        i++;
        j = 0;
    }
    return array_of_words;
}

int main() {
  char **arr = ft_split("To be or not to be, + That is the question.", '+');
  for( int i = 0 ; i < count_words("To be or not to be, + That is the question.", '+'); i++)
  {
    printf("\narr[%i] : %s\n",i,  arr[i]);
  }
  return 0;
}


