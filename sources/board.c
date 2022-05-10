/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** board
*/

#include "my.h"

char **malloc_map(int size)
{
    char **map;
    int count = 0;
    map = malloc(sizeof(char *) * (size +3));
    for (count = 0; count < (size + 2); count++) {
        map[count] = malloc(sizeof(char) * (size * 2) + 3);
    }
    map[count] = NULL;
    return (map);
}

char **generate_map(int size)
{
    char **map;
    int count = 1;
    map = malloc_map(size);
    map[0] = my_memset(map[0], '*', (size * 2) + 1);
    for (count = 1; count < size + 1; count++) {
        map[count] = my_memset(map[count], ' ', (size * 2) + 1);
        map[count][0] = '*';
        map[count][size * 2] = '*';
    }
    map[size + 1] = my_memset(map[size + 1], '*', (size * 2) + 1);
    return (map);
}

char **generate_matches(int size, char **map)
{
    int x_ax = size;
    int y_ax = 1;
    int count = 0;
    for (count = 0; y_ax <= size; count++) {
        x_ax = (size - count);
        while (x_ax < (size + count + 1)) {
            map[y_ax][x_ax] = '|';
            x_ax++;
        }
        y_ax++;
    }
    return (map);
}