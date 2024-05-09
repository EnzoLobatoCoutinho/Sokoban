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
#include "include/my.h"

static int x_up(char **map, int *px, int *py)
{
    if (UP(2) == '#' || UP(2) == 'X')
        return 0;
    UP(2) = 'X';
    return 1;
}

static int x_down(char **map, int *px, int *py)
{
    if (DOWN(2) == '#' || DOWN(2) == 'X')
        return 0;
    DOWN(2) = 'X';
    return 1;
}

static int x_left(char **map, int *px, int *py)
{
    if (LEFT(2) == '#' || LEFT(2) == 'X')
        return 0;
    LEFT(2) = 'X';
    return 1;
}

static int x_right(char **map, int *px, int *py)
{
    if (RIGHT(2) == '#' || RIGHT(2) == 'X')
        return 0;
    RIGHT(2) = 'X';
    return 1;
}

int verif_up(char **map, int *px, int *py)
{
    if (UP(1) == '#')
        return 0;
    if (UP(1) == 'X'){
        return x_up(map, px, py);
    } else {
        return 1;
    }
}

int verif_down(char **map, int *px, int *py)
{
    if (DOWN(1) == '#')
        return 0;
    if (DOWN(1) == 'X'){
        return x_down(map, px, py);
    } else {
        return 1;
    }
}

int verif_left(char **map, int *px, int *py)
{
    if (LEFT(1) == '#')
        return 0;
    if (LEFT(1) == 'X'){
        return x_left(map, px, py);
    } else {
        return 1;
    }
}

int verif_right(char **map, int *px, int *py)
{
    if (RIGHT(1) == '#')
        return 0;
    if (RIGHT(1) == 'X'){
        return x_right(map, px, py);
    } else {
        return 1;
    }
}

void move_p(char **map, int *px, int *py, int direction)
{
    int x = 0;
    int y = 0;

    if (direction == KEY_UP)
        y -= verif_up(map, px, py);
    if (direction == KEY_DOWN)
        y += verif_down(map, px, py);
    if (direction == KEY_LEFT)
        x -= verif_left(map, px, py);
    if (direction == KEY_RIGHT)
        x += verif_right(map, px, py);
    map[*py][*px] = ' ';
    *px += x;
    *py += y;
    map[*py][*px] = 'P';
    clear();
    refresh();
}
