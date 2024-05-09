/*
** EPITECH PROJECT, 2023
** Day08
** File description:
** ProjectKoko
*/

#include <stdio.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int k = 0;

    while (dest[k] != '\0') {
        k++;
    }
    while (src[i] != '\0') {
        dest[i + k] = src[i];
        i++;
    }
    dest[i + k] = '\0';
    return dest;
}
