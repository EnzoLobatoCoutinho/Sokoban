/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** print a char
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
