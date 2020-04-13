/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include "my.h"
#include "lem_in.h"

int get_file_size(char *filename, struct stat sb)
{
    if (stat(filename, &sb) == -1)
        return (-1);
    return (sb.st_size);
}

int manage_file_error(char *filename)
{
    int fd = 0;
    char *buf = NULL;
    struct stat sb;

    sb.st_size = get_file_size(filename, sb);
    if (sb.st_size == -1)
        return (84);
    buf = malloc(sb.st_size);
    if (!buf)
        return (84);
    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (84);
    if (read(fd, buf, sb.st_size) == -1)
        return (84);
    for (int i = 0; buf[i] != '\0'; i++)
        if (buf[i] < '0' && buf[i] > '9' && buf[i] != '#' && buf[i] < 'A' \
        && buf[i] > 'Z' && buf[i] < 'a' && buf[i] > 'z' \
        && buf[i] != '\n' && buf[i] != ' ' && buf[i] != '-')
            return (84);
    return (0);
}

int main(int ac, char **av)
{
    if (ac < 2)
        return (84);
    else if (manage_file_error(av[1]) == 84)
        return (84);
    return (0);
}