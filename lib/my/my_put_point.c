/*
** EPITECH PROJECT, 2023
** point flag
** File description:
** kk
*/

#include <stdarg.h>
#include "my.h"

int my_put_point3(double calcul, int num)
{
    int mult = 10;
    int minus;
    int result;

    while ( num > 0 ) {
        result = (calcul * mult);
        if (result == 0) {
            my_printf("0");
            mult = mult * 10;
            num--;
        } else {
            my_put_nbr(result - minus);
            mult = mult * 10;
            num--;
        }
        minus = result * 10;
    }
}

int my_put_point2(double calcul, int num)
{
    int mult = 1;
    int result;

    while (num != 0) {
        mult = mult * 10;
        num--;
    }
    result = (calcul * mult);
    my_put_nbr(result);
}

int my_put_point( double nb, int num)
{
    int temp;
    double calcul;
    int result;
    int verification;

    if ( nb < 0 ) {
        nb = nb * -1;
    }
    temp = nb;
    calcul = (nb - temp);
    verification = calcul * 10;
    my_put_nbr(temp);
    my_putchar('.');
    if ( verification > 0 ) {
        my_put_point2(calcul, num);
    } else {
        my_put_point3(calcul, num);
    }
}
