/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    char **map;
    int size;
    int max_mch;
    if (ac != 3)
        return (84);
    size = my_getnbr(av[1]);
    max_mch = my_getnbr(av[2]);
    if (size == 0)
        return (84);
    if (size < 1 || size > 99)
        return (84);
    map = generate_map(size);
    map = generate_matches(size, map);
    display_map(map);
    max_mch = matchstick(map, size, max_mch);
    if (max_mch == 84)
        return (0);
    free_map(map, size);
    return (max_mch);
}