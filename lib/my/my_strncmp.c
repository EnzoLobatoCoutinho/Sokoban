/*
** EPITECH PROJECT, 2023
** DayX
** File description:
** Strcmp
*/

#include "my.h"
#include <unistd.h>

int my_strcount(char const *str)
{
    int i = 0;

    while ( str[i] != '\0') {
        i = i + 1;
    }
    return i;
}

int my_strncmp(char const *s1, char const *s2, int n)
{
    int lens1 = my_strcount(s1);
    int lens2 = my_strcount(s2);
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0') && (i < n)) {
        i++;
    }
    if ( lens1 > lens2 ) {
        return 1;
    } else if ( lens1 < lens2 ) {
        return -1;
    } else {
        return 0;
    }
}
