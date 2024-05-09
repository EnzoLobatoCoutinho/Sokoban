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

void close_win(void)
{
    clear();
    endwin();
}

void open_win(char **map, anastr *as)
{
    analyse_map(map, as);
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);
}

void analyse_map(char **str, anastr *as)
{
    as->posxx = malloc(as->totalx * sizeof(int));
    as->posyx = malloc(as->totalx * sizeof(int));
    as->posxo = malloc(as->totalo * sizeof(int));
    as->posyo = malloc(as->totalo * sizeof(int));
    detect_posx(str, as);
    detect_poso(str, as);
}

void restart(char ***map, int *px, int *py, anastr *as)
{
    *map = str_to_array(as->h, as->l, as->str, as->total);
    *px = posx(*map);
    *py = posy(*map);
}

void place_o(char **map, anastr *as)
{
    for (int i = 0; i != as->totalo; i++){
        if (map[as->posyo[i]][as->posxo[i]] == ' ')
            map[as->posyo[i]][as->posxo[i]] = 'O';
    }
    detect_posx(map, as);
}
