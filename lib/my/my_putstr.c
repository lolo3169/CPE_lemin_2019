/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** my_putstr function
*/

void my_putchar(char);

int my_putstr(const char *str)
{
    int count = 0;

    while (str[count] != 0) {
        my_putchar(str[count]);
        count++;
    }
    return (count);
}