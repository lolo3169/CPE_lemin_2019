/*
** EPITECH PROJECT, 2020
** lem_in.h
** File description:
** lem_in
*/

#ifndef LEM_IN_H_
#define LEM_IN_H_

//struct
typedef struct element {
    int nb_node;
    char node;
    int path_size;
    int x;
    int y;
    char *visited;
    struct element *next;
} element_t;

typedef struct list {
    element_t *first;
} list_t;

#endif /* !LEM_IN_H_ */