/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** task03 - 0.1
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while ( str[i] != '\0') {
        i = i + 1;
    }
    return i;
}
