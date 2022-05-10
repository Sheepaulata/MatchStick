/*
** EPITECH PROJECT, 2021
** mtchstick
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#ifndef  READ_SIZE
#define  READ_SIZE (1)
#endif  /* !READ_SIZE  */

#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_memset(char *s, char c, int size);
char *my_realloc_toread(char *str, char c);
int my_getread(char *str);

typedef struct matchstick
{
    int rm_matches;
    int rm_from_line;
    int rem_matches;
} t_matchstick;

char **generate_map(int size);
char **generate_matches(int size, char **map);
char **malloc_map(int size);
void display_map(char **map);
void free_map(char **map, int size);
int matchstick(char **map, int size, int mmpt);
int lose_condition(char **map);
char **player_turn(char **map, int size, int mmpt);
char **ai_turn(char **map, int size, int mmpt);
int player_input(int *result);
int ver_line(int line, int size);
int ver_matches(int matches, int mmpt, int remaining_matches);
void ver_matches_bis(void);
char **remove_matches(int matches, int line, char **map);
int count_matches(int line, char **map);
int ver_line_bot(int line, int size);
int ver_matches_bot(int matches, int mmpt, int remaining_matches);
int safe_random(int size);

#endif /* !MY_H_ */