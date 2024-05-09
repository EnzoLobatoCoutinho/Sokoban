/*
** EPITECH PROJECT, 2023
** my_put_scientg
** File description:
** float
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "my.h"

double my_put_scientg(double nb)
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
    my_put_doubleg(nb);
    if ( len >= 9) {
        my_printf("e+%d", len);
    } else {
        my_printf("e+0%d", len);
    }
    return 0;
}
