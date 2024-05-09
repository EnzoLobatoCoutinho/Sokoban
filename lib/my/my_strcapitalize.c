/*
** EPITECH PROJECT, 2023
** DayX
** File description:
** X
*/

#include "my.h"
#include <unistd.h>

char my_str_verif(char *str, int i)
{
    if ( i == 0 && (str[i] > 97 && str[i] < 122)) {
        str[i] = str[i] - 32;
        write(1, &str[i], 1);
    } else if (str[i] == 32 && (str[i + 1] > 97 && str[i + 1] < 122)) {
        str[i + 1] = str[i + 1] - 32;
        write(1, &str[i], 1);
    } else {
        write(1, &str[i], 1);
    }
}

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_str_verif(str, i);
    }
}
