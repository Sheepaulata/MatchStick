/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** bot_error
*/

#include "my.h"

int ver_line_bot(int line, int size)
{
    if (line < 0)
        return (84);
    if (line == 0 || line > size)
        return (84);
    return (0);
}

int ver_matches_bot(int matches, int mmpt, int remaining_matches)
{
    if (matches < 0)
        return (84);
    if (matches == 0)
        return (84);
    if (matches > mmpt)
        return (84);
    if (matches > remaining_matches)
        return (84);
    return (0);
}