/*
** EPITECH PROJECT, 2023
** Hey
** File description:
** Hey
*/

#include "my.h"
#include <unistd.h>
#include <stdio.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ( str[i] < 48 || str[i] > 57 ) {
            return 0;
        }
        i++;
    }
    return 1;
}
