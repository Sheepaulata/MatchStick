/*
** EPITECH PROJECT, 2021
** mtchstick
** File description:
** my_memset
*/

#include "my.h"

char *my_memset(char *s, char c, int size)
{
    int i = 0;
    while (i < size)
        s[i++] = c;
    return (s);
}