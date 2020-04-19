/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** function
*/

#include "include/my.h"

char *my_concat(char *str, char *copy)
{
    int i = 0;
    int j = 0;
    static int h = 0;
    for (; str[i] != '\0'; i++);
    if (h != 0) {
        str[i] = '\n';
        i++;
    }
    h++;
    for (; copy[j] != '\0'; j++, i++)
        str[i] = copy[j];
    str[i] = '\0';
    return (str);
}

char *my_realloc(char *str, char *copy)
{
    int i = my_strlen(str);
    int j = my_strlen(copy);
    int size = i + j;
    char *new_str = malloc(sizeof(char) * (size) + 1);

    new_str = my_concat(str, copy);
    return (new_str);
}