/*
** EPITECH PROJECT, 2021
** matchstik
** File description:
** player
*/

#include "my.h"

char **player_turn(char **map, int size, int mmpt)
{
    t_matchstick game;

    my_putstr("Your turn:\n");
    do {
        do {
            my_putstr("Line: ");
            if (player_input(&game.rm_from_line) == 84)
                return (NULL);
        } while (ver_line(game.rm_from_line, size) != 0);
        my_putstr("Matches: ");
        if (player_input(&game.rm_matches) == 84)
            return (NULL);
        game.rem_matches = count_matches(game.rm_from_line, map);
    } while (ver_matches(game.rm_matches,
    mmpt, game.rem_matches) != 0);
    my_putstr("Payer removed ");
    my_put_nbr(game.rm_matches);
    my_putstr(" match(es) from line ");
    my_put_nbr(game.rm_from_line);
    my_putchar('\n');
    map = remove_matches(game.rm_matches, game.rm_from_line, map);
    display_map(map);
    return (map);
}

int player_input(int *result)
{
    char buffer;
    char *input = malloc(sizeof(char));
    int safe;
    input[0] = '\0';
    for (buffer = '\0'; buffer != '\n'; buffer = buffer) {
        buffer = '\0';
        safe = read(0, &buffer, 1);
        input = my_realloc_toread(input, buffer);
        if (safe == 0)
            return (84);
    }
    *result = my_getread(input);
    free(input);
    return (0);
}