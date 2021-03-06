/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** function
*/

#include "include/my.h"

int search_open(void)
{
    int nb_line = 0;
    ssize_t read;
    size_t len = 0;
    char *line = NULL;
    char *str = NULL;

    read = getline(&line, &len, stdin);
    if (read == -1)
        return (84);
    if (manage_file_error(line) == 84)
        return (84);
    str = malloc(sizeof(char) * len + 1);
    for (int j = 0; j != read; j++)
        str[j] = '\0';
    for (; read != -1; read = getline(&line, &len, stdin), nb_line++) {
        if (line[read - 1] == '\n')
            line[read - 1] = '\0';
        str = my_realloc(str, line);
    }
    part_file(str, nb_line);
    return (0);
}

int part_file(char *str, int nb_line)
{
    char **arr = NULL;

    arr = allocation(arr, str, nb_line);
    return (0);
}

char **allocation(char **arr, char *str, int nb_line)
{
    int j = 0;
    int k = 1;

    arr = malloc(sizeof(char *) * (nb_line + 1));
    for (int l = 0; l != nb_line; l++)
        arr[l] = '\0';
    for (int s = 0; str[s] != '\0'; s++, k++) {
        if (str[s] == '\n') {
            arr[j] = malloc(sizeof(char) * (k + 1));
            k = 0;
            j++;
        }
    }
    arr[j] = malloc(sizeof(char) * (k + 1));
    arr = strcopy(arr, str);
    arr[j + 1] = NULL;
    return (arr);
}

char **strcopy(char **arr, char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (; str[i] != '\0'; i++, k++) {
        if (str[i] != '\n') {
            arr[j][k] = str[i];
        }
        else {
            arr[j][k] = '\0';
            k = -1;
            my_printf("%s\n", arr[j]);
            j++;
        }
    }
    return (arr);
}