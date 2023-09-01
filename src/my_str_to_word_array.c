/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** my_str_to_word_array.c
*/

#include "../include/my.h"

int count_separators(char *buf, char separator)
{
    int j = 1;
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == separator)
            j++;
    }
    return j;
}

char *fill_array(char *str, char *array, int start, int end)
{
    int x = 0;
    for (start; start != end; start++) {
        array[x] = str[start];
        x++;
    }
    array[x] = '\0';
    return array;
}

char **my_str_to_word_array(char *str, char separator)
{
    int j = count_separators(str, separator);
    int end = 0;
    int start = 0;
    int len = 0;
    int x = 0;
    int a = my_strlen(str);
    char **array = malloc(sizeof(char *) * (j + 1));

    for (end; end <= a; end++) {
        len = end - start;
        if (str[end] == separator || str[end] == '\0') {
            array[x] = malloc((sizeof(char)) * (len + 1));
            array[x] = fill_array(str, array[x], start, end);
            end++;
            start = end;
            x++;
        }
    }
    array[x] = NULL;
    return array;
}
