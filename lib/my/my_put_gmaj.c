/*
** EPITECH PROJECT, 2023
** epitech
** File description:
** %g
*/

#include "my.h"
#include <unistd.h>

double my_put_gmaj(double nb)
{
    int val = nb;
    double calcul;
    int val_ent;
    int mult = 0;

    calcul = (nb - val) * 10;
    if (nb <= 1000000 && nb >= 100000) {
        my_put_nbr(nb);
    } else if ( nb <= 100000) {
        val_ent = nb;
        my_put_nbr(val_ent);
        my_putchar('.');
        my_put_nbr(calcul + 1);
    } else {
        my_put_scientmaj(nb);
    }
    return 0;
}
