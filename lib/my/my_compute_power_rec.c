/*
** EPITECH PROJECT, 2023
** Day0
** File description:
** Task04
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    if ( p > 181 - 1) {
        return 0;
    }
    if ( p == 1 ) {
        return nb;
    }
    if ( p < 0 ) {
        return 0;
    }
    if ( p == 0 ) {
        return 1;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
