/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** reproduce the str cmp fct
*/

#include <stddef.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (s1 == NULL && s2 == NULL)
        return (1);
    return (0);
    while (s1[i] != '\0') {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}
