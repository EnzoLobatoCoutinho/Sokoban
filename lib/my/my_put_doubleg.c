/*
** EPITECH PROJECT, 2023
** project Epitech
** File description:
** my_putlong to read long numbers
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int condition_verif2dbg(int calcul)
{
    if (calcul >= 10 && calcul <= 100){
        my_printf("000");
        my_put_nbr(calcul);
        return 0;
    }
    if (calcul >= 1 && calcul <= 10){
        my_printf("0000");
        my_put_nbr(calcul);
        return 0;
    }
}

int condition_verifdoubleg(int calcul)
{
    if (calcul >= 10000 && calcul <= 100000){
        my_printf("%d", calcul);
        return 0;
    }
    if (calcul >= 1000 && calcul <= 10000){
        my_printf("0");
        my_put_nbr(calcul);
        return 0;
    }
    if (calcul >= 100 && calcul <= 1000){
        my_printf("00");
        my_put_nbr(calcul);
        return 0;
    }
    condition_verif2dbg(calcul);
}

double my_put_posdoubleg(int calcul)
{
    int i = 0;

    calcul = (calcul + 3) / 10;
    if ( calcul == 0 ) {
        while ( i != 5 ) {
            my_putchar('0');
            i++;
        }
    } else {
        condition_verifdoubleg(calcul);
    }
    return 0;
}

double my_put_doubleg(double nb)
{
    int calcul = 0;
    int temp;

    temp = nb;
    calcul = ( nb - temp ) * 1000000;
    if ( temp >= 0 ) {
        my_put_nbr(temp);
        my_putchar('.');
        my_put_posdoubleg(calcul);
    } else {
        my_put_nbr(temp);
        my_putchar('.');
        my_put_posdoubleg(-calcul);
    }
}
