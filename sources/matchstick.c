/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** matchstick
*/

#include "my.h"

int matchstick(char **map, int size, int mmpt)
{
    while (1337) {
        map = player_turn(map, size, mmpt);
        if (map == NULL)
            return (84);
        if (lose_condition(map) == 0) {
            my_putstr("You lose, too bad...\n");
            return (2);
        }
        map = ai_turn(map, size, mmpt);
        if (map == NULL)
            return (84);
        if (lose_condition(map) == 0) {
            my_putstr("I lose.. snif... but I'll get you next time!!\n");
            return (1);
        }
    }
}

int count_matches(int line, char **map)
{
    int count = 0;
    int i;
    for (i = 0; map[line][i] != '\0'; i++)
        if (map[line][i] == '|')
            count++;
    return (count);
}

char **remove_matches(int matches, int line, char **map)
{
    int count;
    for (count = my_strlen(map[line]); count != 0; count--) {
        if (map[line][count] == '|' && matches != 0) {
            map[line][count] = ' ';
            matches--;
        }
        if (matches == 0)
            return (map);
    }
    return (NULL);
}

int lose_condition(char **map)
{
    int y_ax = 1;
    for (y_ax = 1; map[y_ax] != NULL; y_ax++) {
        if (count_matches(y_ax, map) != 0)
            return (84);
    }
    return (0);
}