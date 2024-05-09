/*
** EPITECH PROJECT, 2023
** my_put_float
** File description:
** float
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "my.h"

double my_put_scientmaj(double nb)
{
    int len = 0;

    while ( nb > 10 ) {
        nb = (nb / 10);
        len++;
    }
    if ( nb < 0) {
        my_putchar('-');
        my_put_scient(-nb);
        return 0;
    }
    my_put_float(nb);
    if ( len >= 9) {
        my_printf("E+%d", len);
    } else {
        my_printf("E+0%d", len);
    }
    return 0;
}
