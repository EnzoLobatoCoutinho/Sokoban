/*
** EPITECH PROJECT, 2023
** Taaaaa
** File description:
** MAAAA
*/

#include "my.h"
#include <unistd.h>
#include <stdio.h>

int my_put_nbr(int nb)
{
    int a;

    if (nb < 0) {
        nb = nb * (-1);
        write(1, "-", 1);
    }
    if (nb >= 10){
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        a = 48 + nb % 10;
        my_putchar(a);
    }
    return 0;
}

long int my_put_long(long int nb)
{
    long int a;

    if (nb < 0) {
        nb = nb * (-1);
        write(1, "-", 1);
    }
    if (nb >= 10){
        my_put_long(nb / 10);
        my_put_long(nb % 10);
    } else {
        a = 48 + nb % 10;
        my_putchar(a);
    }
    return 0;
}
