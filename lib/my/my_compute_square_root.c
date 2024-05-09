/*
** EPITECH PROJECT, 2023
** my compute square root
** File description:
** square root
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int base = nb;
    int detector;

    if ( nb == 0 ) {
        return 0;
    }
    if ( nb < 0 || nb > (32767 * 32767)) {
        return 0;
    }
    for (int i = 0; i < base; i ++ ) {
        detector = i * i;
        if ( detector == nb){
            return i;
        }
        if ( detector > nb ) {
            return 0;
        }
    }
    return 0;
}
