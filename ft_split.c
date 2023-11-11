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
    printf("%i\n", num_of_words);
    array_of_words = (char **)malloc(num_of_words * sizeof(char *));
    if (array_of_words == NULL) {
        return 0;
    }
    i = 0;
    p = (char*)s;
    len_of_word = 0;
    while (i < num_of_words)
    {
        printf("%i\n", i);
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
            printf("'%c'", *p);
            p++;
            j++;
        }
        printf(" \n");
        array_of_words[i][j] = '\0';
        j++;
        p++;
        i++;
        j = 0;
    }
    return array_of_words;
}

int main() {
   char *str =  "mie fmf+dsffds + 02a";
   char sep = '+';
  char **arr = ft_split(str, sep);
  for( int i = 0 ; i < count_words(str, sep); i++)
  {
    printf("\narr[%i] : '%s'\n",i,  arr[i]);
  }
  return 0;
}


