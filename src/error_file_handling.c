/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** function
*/

#include "include/my.h"

int check_tags_in_file(int i, char *buf)
{
    if (buf[i] == '#') {
        if (buf[i++] <= '0' && buf[i++] >= '9' && buf[i++] < 'A')
            return (84);
    } else if (buf[i] >= '0' && buf[i] <= '9')
        if (buf[i++] != ' ' && buf[i++] != '-' && buf[i++] != '\n' \
        && buf[i++] != '\0' && buf[i++] < '0' && buf[i++] > '9' \
        && buf[i++] < 'a' && buf[i] > 'z')
            return (84);
    return (0);
}

int manage_file_error(char *buf)
{
    for (int i = 0; buf[i] != '\0'; i++)
        if (check_tags_in_file(i, buf) == 84)
            return (84);
    return (0);
}
