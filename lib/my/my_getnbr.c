/*
** EPITECH PROJECT, 2023
** DayX
** File description:
** getnbr
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>

int my_getnbr(const char *str)
{
    int result = 0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}
