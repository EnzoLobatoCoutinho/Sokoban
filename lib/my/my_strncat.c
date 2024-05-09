/*
** EPITECH PROJECT, 2023
** Klo
** File description:
** Lll
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int k = 0;

    while (dest[k] < nb && dest[k] != '\0') {
        k++;
    }
    while (src[i] != '\0' && src[i] < nb) {
        dest[i + k] = src[i];
        i++;
    }
    dest[i + k] = '\0';
    return dest;
}
