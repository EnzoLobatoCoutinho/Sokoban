/*
** EPITECH PROJECT, 2023
** epitech
** File description:
** %g
*/

#include "my.h"
#include <unistd.h>

int condition_verifg2(int val_ent)
{
    if (val_ent >= 10 && val_ent <= 100){
        return 10000;
    }
    if (val_ent >= 1 && val_ent <= 10){
        return 100000;
    }
}

int condition_verifg(int val_ent)
{
    int retour;

    if (val_ent >= 100000 && val_ent <= 1000000){
        return 1;
    }
    if (val_ent >= 10000 && val_ent <= 100000){
        return 10;
    }
    if (val_ent >= 1000 && val_ent <= 10000){
        return 100;
    }
    if (val_ent >= 100 && val_ent <= 1000){
        return 1000;
    }
    retour = condition_verifg2(val_ent);
    return retour;
}

double my_put_g(double nb)
{
    int val = nb;
    double calcul;
    int val_ent = nb;
    int mult;

    mult = condition_verifg(val_ent);
    calcul = (nb - val);
    if ((calcul == 0) && (nb < 1000000)) {
        my_put_nbr(nb);
    } else if ( nb <= 100000) {
        val_ent = nb;
        my_put_nbr(val_ent);
        my_putchar('.');
        calcul = (nb - val) * mult;
        my_put_nbr(calcul + 1);
    } else {
        my_put_scientg(nb);
    }
    return 0;
}
