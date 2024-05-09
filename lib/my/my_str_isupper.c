/*
** EPITECH PROJECT, 2023
** Ysd
** File description:
** Isd
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90) {
            return 0;
        }
        i++;
    }
    return 1;
}
