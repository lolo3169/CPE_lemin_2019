/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** my_putchar function
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}