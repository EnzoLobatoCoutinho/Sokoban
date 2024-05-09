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

static void yes_no(int l, int *lo)
{
    if (l > *lo) {
        *lo = l;
    }
}

static void analyse(char *str, anastr *as)
{
    int l = 0;

    as->h = 0;
    as->l = 0;
    as->totalx = 0;
    as->totalo = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            as->h += 1;
            yes_no(l, &(as->l));
            l = 0;
        } else
            l += 1;
        if (str[i] == 'X')
            as->totalx += 1;
        if (str[i] == 'O')
            as->totalo += 1;
    }
    as->h += 1;
}

void display_2d_map(char **map, anastr *as)
{
    resize_win(as);
    place_o(map, as);
    for (int j = 0; j < as->h; j++) {
        for (int k = 0; k < as->l; k++) {
            printw("%c", map[j][k]);
        }
        printw("\n");
    }
}

static void verif_getch(int ch, char **map, int *px, int *py)
{
    if (ch != ERR)
        move_p(map, px, py, ch);
}

int window(char **map, anastr *as)
{
    int ch;
    int px = posx(map);
    int py = posy(map);

    open_win(map, as);
    while (1) {
        display_2d_map(map, as);
        ch = getch();
        if (detect_xo(map, as) == 1){
            close_win();
            return 0;
        }
        if (detect_x(map, as) == 1){
            close_win();
            return 1;
        }
        verif_getch(ch, map, &px, &py);
        if (ch == 32)
            restart(&map, &px, &py, as);
    }
}

int launch(char **av)
{
    char *str;
    char **map;
    struct stat sb;
    anastr as;
    int fd;

    stat(av[1], &sb);
    str = malloc(sb.st_size * sizeof(char));
    fd = open(av[1], O_RDONLY);
    read(fd, str, sb.st_size);
    as.total = sb.st_size;
    as.str = str;
    analyse(str, &as);
    map = str_to_array(as.h, as.l, str, sb.st_size);
    if (window(map, &as) == 1){
        close(fd);
        free(map);
        free(str);
        return 1;
    }
}

static int valid_map(char *file, int fd)
{
    char *str;
    struct stat sb;

    stat(file, &sb);
    str = malloc(sb.st_size * sizeof(char));
    read(fd, str, sb.st_size);
    for (int i = 0; i != sb.st_size; i++){
        if (VERIF || VERIF2){
            continue;
        }else{
            free(str);
            return 1;
        }
    }
    if (my_strlen(str) == 0)
        return 1;
    free(str);
    return 0;
}

static void print_h(void)
{
    my_printf("USAGE\n     ./my_sokoban map\nDESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, ");
    my_printf("containing '#' for walls,\n");
    my_printf("          'P' for the player, 'X' for ");
    my_printf("boxes and 'O' for storage locations.\n");
}

int main(int ac, char **av)
{
    int fd;

    if (ac == 2 && my_strcmp(av[1], "-h") == 0){
        print_h();
        return 0;
    }
    if (av[1] == NULL)
        return 84;
    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return 84;
    if (valid_map(av[1], fd) == 1)
        return 84;
    close(fd);
    return launch(av);
}
