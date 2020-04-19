/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** libmy
*/

#ifndef LIBMY_H_
#define LIBMY_H_

//include
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include "struct.h"

//lib
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_printf(const char *format, ...);
int my_getnbr(char const *str);
int my_putnbr_base(int nbr, char const *base);
char **my_str_to_word_array(char const *str, char limit);
int my_strcmp(char const *s1, char const *s2);

//function
list_t *init(list_t *list, element_t *element);
void add_element(list_t *list);
int search_open(void);
char *my_concat(char *str, char *copy);
char *my_realloc(char *str, char *copy);
int part_file(char *str, int i);
int nb_line(char *str);
char **strcopy(char **arr, char *str);
char **allocation(char **arr, char *str, int i);
int check_tags_in_file(int i, char *buf);
int manage_file_error(char *buf);

#endif /* !LIBMY_H_ */