/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Kkkkkk
*/

#include "my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    return 0;
}
