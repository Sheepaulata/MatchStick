/*
** EPITECH PROJECT, 2021
** B-CPE-200-NAN-2-1-matchstick-alice.chaix-de-lavarene
** File description:
** ralloc
*/

#include "my.h"

void *my_memcpy(void *dest, const void *src, size_t size)
{
    unsigned int count;
    const char *copy_src = src;
    char *copy_dest = dest;

    for (count = 0; count <= size; count++) {
        copy_dest[count] = copy_src[count];
    }
    return (dest);
}

void *my_realloc(void *ptr, size_t size)
{
    void *reptr;
    if (ptr == NULL)
        return (malloc(size));
    reptr = malloc(size);
    if (reptr)
        my_memcpy(reptr, ptr, size);
    if (ptr)
        free(ptr);
    return (reptr);
}

char *my_strcat_read(char *output, char input)
{
    int len = my_strlen(output);
    output[len + 1] = '\0';
    return (output);
}

char *my_memcpy_toread(char *dest, const char *src, size_t size)
{
    unsigned int count;
    for (count = 0; count <= size; count++) {
        dest[count] = src[count];
    }
    return (dest);
}

char *my_realloc_toread(char *str, char c)
{
    char *reptr;
    int size = 0;
    while (str[size] != '\0')
        size++;
    reptr = malloc(size + 2);
    if (reptr)
        reptr = my_memcpy_toread(reptr, str, size);
    reptr = my_strcat_read(reptr, c);
    free(str);
    return (reptr);
}