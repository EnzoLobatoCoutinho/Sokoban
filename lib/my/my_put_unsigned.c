/*
** EPITECH PROJECT, 2023
** put_unsinged
** File description:
** epitech
*/

#include "my.h"
#include <stdio.h>

int my_put_unsinged(int nb)
{
    long result = 4294967296;
    int nb_pos;

    nb_pos = nb * -1;
    if ( nb >= 0 ) {
        my_put_nbr(nb);
    } else {
        result = result - nb_pos;
        my_put_long(result);
    }
    return 0;
}
