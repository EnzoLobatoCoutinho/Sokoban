/*
** EPITECH PROJECT, 2023
** Task01
** File description:
** Day04
*/

#include <unistd.h>
#include "my.h"

void my_swap(int *a, int *b)
{
    int t = *a;

    *a = *b;
    *b = t;
}
