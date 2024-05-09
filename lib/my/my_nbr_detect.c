/*
** EPITECH PROJECT, 2023
** detect
** File description:
** number
*/

#include "my.h"

void my_nbr_detect(int i, char *str)
{
    int len = my_strlen(str);
    int result = i - len;

    if ( result < len ){
        return;
    }
    while ( result > 0 ) {
        my_putchar(' ');
        result--;
    }
    return;
}
