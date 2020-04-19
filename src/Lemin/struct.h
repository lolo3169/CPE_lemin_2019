/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#ifndef LEM_IN_H_
#define LEM_IN_H_

typedef struct element
{
    int nb_node;
    char node;
    int path_size;
    int x;
    int y;
    char *visited;
    struct element *next;
}element_t;

typedef struct list
{
    element_t *first;
}list_t;

list_t *init(list_t *list, element_t *element);
void add_element(list_t *list);
int search_open(void);
int my_strlen(char *str);
char *my_concat(char *str, char *copy, int nb_line);
char *my_realloc(char *str, char *copy, int nb_line);
int part_file(char *str, int i);
int nb_line(char *str);
char **strcopy(char **arr, char *str, int nb_line);
char **allocation(char **arr, char *str, int i);
#endif