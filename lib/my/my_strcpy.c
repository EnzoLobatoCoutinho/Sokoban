/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** Task01
*/

#include <stdio.h>
#include <unistd.h>
#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    for (int i = 0; src[i] != '\0'; i++ ){
        dest[i] = src[i];
    }
    return 0;
}
