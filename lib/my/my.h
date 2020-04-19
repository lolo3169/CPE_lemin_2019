/*
** EPITECH PROJECT, 2019
** CPE_lemin_2019
** File description:
** libmy
*/

#ifndef LIBMY_H_
#define LIBMY_H_

#include <stddef.h>
#include <stdlib.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_printf(const char *format, ...);
int my_getnbr(char const *str);
int my_putnbr_base(int nbr, char const *base);
char **my_str_to_word_array(char const *str, char limit);
int my_strcmp(char const *s1, char const *s2);

#endif /* !LIBMY_H_ */
