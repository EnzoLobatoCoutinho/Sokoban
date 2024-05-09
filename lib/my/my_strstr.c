/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** Task05
*/

#include <unistd.h>
#include <stdio.h>

char my_strstr(char *str, char const *to_find)
{
    int i;

    while ( str[i] != to_find[i] ) {
        i ++;
    }
    if ( str[i] == to_find[i] ) {
        write(1, to_find, 5);
    }else{
        return 0;
    }
}
