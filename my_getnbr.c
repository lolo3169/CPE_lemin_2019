/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr
*/

#include "my.h"

int check_overflow(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (i > 10)
            return (0);
    return (0);
}

int my_getnbr(char const *str)
{
    int nb = 0;
    int digit = 0;
    char c = 0;

    check_overflow(str);
    for (int i = 0; i < my_strlen(str); i++) {
        c = str[i];
        if (c == '-' && str[i + 1] >= '0' && str[i + 1] <= '9') {
            digit = str[i + 1] - '0';
            nb = nb * 10 + digit * -1;
        }
        if (c >= '0' && c <= '9') {
            digit = c - '0';
            nb = nb * 10 + digit;
        }
        else
            return (nb);
    }
    return (nb);
}