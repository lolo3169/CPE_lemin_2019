/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** my_strlen function
*/

int my_strlen(const char *str)
{
    int count;
    for (count = 0; str[count] != 0; count++);
    return (count);
}