/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Task03
*/

#include <string.h>
#include <unistd.h>
#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int i = 0;
    int t = 0;

    while (i < len / 2 ) {
        t = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = t;
        i++;
    }
    return str;
}
