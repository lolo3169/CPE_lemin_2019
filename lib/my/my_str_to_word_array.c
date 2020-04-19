/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** copy a str to another str
*/

#include "my.h"

int allocate_tab(char **result, char const *str, char limit)
{
    int i = 0;
    int buf = 0;
    int size = 0;

    for (; str[size] != '\0'; size++) {
        if (str[size] == limit || str[size] == '\n') {
            result[i] = malloc(sizeof(char) * (size - buf));
            if (!result[i])
                return ((long)NULL);
            i++;
            buf = size;
        }
    }
    result[i] = malloc(sizeof(char) * (size - buf));
    if (!result[i])
        return ((long)NULL);
    return (0);
}

int count_separators(char const *str, char limit, int sep)
{
    for (int i = 1; str[i] != '\0'; i++)
        if (str[i] == limit)
            sep += 1;
    return (sep);
}

char **my_str_to_word_array(char const *str, char limit)
{
    char **result = NULL;
    int sep = 1;
    int stock_characters = 0;

    sep = count_separators(str, limit, sep);
    result = malloc(sizeof(char *) * sep);
    if (!result)
        return (NULL);
    allocate_tab(result, str, limit);
    for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
        if (str[i] != limit) {
            result[stock_characters][j] = str[i];
            result[stock_characters][j + 1] = '\0';
        } if (str[i + 1] == limit) {
            stock_characters++;
            i++;
            j = -1;
        }
    }
    result[stock_characters + 1] = NULL;
    return (result);
}