/*
** EPITECH PROJECT, 2020
** CPE_lemin_2019
** File description:
** main function
*/

#include "include/my.h"

int main(void)
{
    int result = 0;

    result = search_open();
    if (result == 84)
        my_printf("Error\n");
    return (result);
}
