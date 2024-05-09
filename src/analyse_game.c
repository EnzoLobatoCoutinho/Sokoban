/*
** EPITECH PROJECT, 2023
** sokoban
** File description:
** sokoban
*/

#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int posx(char **str)
{
    int i = 0;
    int j = 0;

    while (str[i][j] != 'P') {
        if (str[i][j] == '\0') {
            i++;
            j = 0;
        } else {
            j++;
        }
    }
    return j;
}

int posy(char **str)
{
    int i = 0;
    int j = 0;

    while (str[i][j] != 'P') {
        if (str[i][j] == '\0') {
            i++;
            j = 0;
        } else {
            j++;
        }
    }
    return i;
}

void detect_posx(char **str, anastr *as)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (i != as->h) {
        if (str[i][j] == 'X') {
            as->posyx[k] = i;
            as->posxx[l] = j;
            k += 1;
            l += 1;
        }
        j++;
        if (j == as->l) {
            i++;
            j = 0;
        }
    }
}

void detect_poso(char **str, anastr *as)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    while (i != as->h) {
        if (str[i][j] == 'O') {
            as->posyo[k] = i;
            as->posxo[l] = j;
            k += 1;
            l += 1;
        }
        j++;
        if (j == as->l) {
            i++;
            j = 0;
        }
    }
}

static int yes_no(anastr *as, int i, int j)
{
    if (as->posyo[j] == as->posyx[i] && as->posxo[j] == as->posxx[i])
        return 1;
    return 0;
}

int detect_xo(char **map, anastr *as)
{
    int total = 0;

    for (int i = 0; i != as->totalo; i++){
        for (int j = 0; j != as->totalx; j++){
            total += yes_no(as, i, j);
        }
    }
    if (total >= as->totalo)
        return 1;
    return 0;
}
