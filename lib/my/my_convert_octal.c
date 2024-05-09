/*
** EPITECH PROJECT, 2023
** conv_octal
** File description:
** ll
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_convert_octal(int nb)
{
    int i = 0;
    char result[50] = { 0 };
    int len;

    while (nb != 0) {
        result[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    len = my_strlen(result);
    for (int k = len - 1; k > -1; k--) {
    }
    return 0;
}
