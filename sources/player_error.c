/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** player_error
*/

#include "my.h"

int ver_line(int line, int size)
{
    if (line < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected\n");
        return (84);
    }
    if (line == 0 || line > size) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected\n");
        return (84);
    }
    return (0);
}

int ver_matches(int matches, int mmpt, int remaining_matches)
{
    if (matches < 0) {
        my_putstr("Error: ");
        my_putstr("invalid output (positive number expected)\n");
    }
    if (matches == 0) {
        my_putstr("Error: ");
        my_putstr("you have to remove at least one match\n");
        return (84);
    }
    if (matches > mmpt) {
        my_putstr("Error: you cannot remove more than ");
        my_put_nbr(mmpt);
        my_putstr(" matches per turn\n");
        return (84);
    }
    if (matches > remaining_matches) {
        ver_matches_bis();
        return (84);
    }
    return (0);
}

void ver_matches_bis(void)
{
    my_putstr("Error: ");
    my_putstr("not enough matches on this line\n");
}