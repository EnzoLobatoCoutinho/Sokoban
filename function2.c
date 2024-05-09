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

int detect_x(char **map, anastr *as)
{
    int total = 0;

    for (int i = 0; i != as->totalx; i++){
        if (UP2(i) == '#' && RIGHT2(i) == '#'){
            total += 1;
        }
        if (UP2(i) == '#' && LEFT2(i) == '#'){
            total += 1;
        }
        if (DOWN2(i) == '#' && RIGHT2(i) == '#'){
            total += 1;
        }
        if (DOWN2(i) == '#' && LEFT2(i) == '#'){
            total += 1;
        }
    }
    if (total >= as->totalx)
        return 1;
    return 0;
}

void resize_win(anastr *as)
{
    int max_y;
    int max_x;

    getmaxyx(stdscr, max_y, max_x);
    while (max_y < as->h || max_x < as->l + 1) {
        clear();
        getmaxyx(stdscr, max_y, max_x);
        mvprintw(max_y / 2, (max_x - 16) / 2, "Window too small");
        refresh();
        getch();
        clear();
    }
}
