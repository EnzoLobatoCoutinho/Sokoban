/*
** EPITECH PROJECT, 2023
** hexa_conv_min
** File description:
** jj
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_hexa_min(int nb)
{
    int i = 0;
    char result[50] = { 0 };
    int calcul = 0;
    int len;

    while (nb != 0){
        result[i] = nb % 16;
        nb = nb / 16;
        i++;
    }
    len = my_strlen(result);
    for (int k = len; k > -1; k--) {
        if ( result[k] > 9 ) {
            calcul = result[k] - 10;
            result[k] = calcul + 97;
            my_putchar(result[k]);
        } else {
            my_put_nbr(result[k]);
        }
    }
}
