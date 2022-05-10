/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** bot
*/

#include "my.h"

char **ai_turn(char **map, int size, int mmpt)
{
    t_matchstick game;
    my_putstr("AI's turn...\n");
    do {
        do {
            game.rm_from_line = random()/1000000;
        } while (ver_line_bot(game.rm_from_line, size) != 0);
        game.rm_matches = random()/1000000;
        game.rem_matches = count_matches(game.rm_from_line, map);
    } while (ver_matches_bot(game.rm_matches, mmpt,
game.rem_matches) != 0);
    my_putstr("AI removed ");
    my_put_nbr(game.rm_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(game.rm_from_line);
    my_putchar('\n');
    map = remove_matches(game.rm_matches, game.rm_from_line, map);
    display_map(map);
    return (map);
}

int safe_random(int size)
{
    int z = rand();

    while (z > 0 && z < size)
        z = rand();
    return (z);
}
