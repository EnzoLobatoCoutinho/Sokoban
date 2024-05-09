/*
** EPITECH PROJECT, 2023
** Task06
** File description:
** Day05
*/

#include <stdio.h>

int my_is_prime(int nb)
{
    int result ;

    if (nb <= 1) {
        return 0;
    }
    for (int i = 2; i < nb; i ++) {
        result = nb % i;
        if (result == 0) {
            return 0;
        }
    }
    return 1;
}
