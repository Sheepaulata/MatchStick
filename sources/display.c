/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** display
*/

#include "my.h"

void display_map(char **map)
{
    int count;
    for (count = 0; map[count] != NULL; count++) {
        my_putstr(map[count]);
        my_putchar('\n');
    }
    my_putchar('\n');
}

void free_map(char **map, int size)
{
    int count;
    free(map[0]);
    for (count = 1; count < (size + 2); count++)
        free(map[count]);
    free(map);
}