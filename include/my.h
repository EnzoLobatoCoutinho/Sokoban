/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** task03
*/

#include <stdarg.h>
#include <stdio.h>
#define UP(a) map[*py - a][*px]
#define DOWN(a) map[*py + a][*px]
#define LEFT(a) map[*py][*px - a]
#define RIGHT(a) map[*py][*px + a]
#define UP2(a) map[as->posyx[a] - 1][as->posxx[a]]
#define DOWN2(a) map[as->posyx[a] + 1][as->posxx[a]]
#define LEFT2(a) map[as->posyx[a]][as->posxx[a] - 1]
#define RIGHT2(a) map[as->posyx[a]][as->posxx[a] + 1]
#define VERIF str[i] == ' ' || str[i] == '\n' || str[i] == '#'
#define VERIF2 str[i] == 'X' || str[i] == 'O' || str[i] == 'P'
#pragma once

typedef struct {
    int l;
    int h;
    int total;
    int totalx;
    int totalo;
    int posy;
    int posx;
    int *posyx;
    int *posxx;
    int *posyo;
    int *posxo;
    char *str;
}anastr;

double my_put_scientg(double nb);

void my_nbr_detect(int i, char *str);

int my_put_point( double nb, int num);

double my_put_doubleg(double nb);

int my_printf(const char *format, ...);

long int my_put_long(long int nb);

double my_put_scient(double nb);

double my_put_scientmaj(double nb);

double my_put_gmaj(double nb);

double my_put_g(double nb);

int my_put_unsinged(int nb);

void verification(const char *format, int i, va_list ap);

double my_put_g(double nb);

void my_putnbr_base(unsigned long long nb, char *base);

double my_put_float(double nb);

double my_put_double(double nb);

int my_convert_octal(int nb);

int my_hexa_maj(int nb);

int my_hexa_min(int nb);

void my_putchar(char);

int my_isneg(int);

int my_put_nbr(int);

void my_swap(int *, int *);

int my_putstr(char const *);

int my_strlen(char const *);

int my_getnbr(char const *);

void my_sort_int_array(int *, int );

int my_compute_power_rec(int, int);

int my_compute_square_root(int);

int my_is_prime(int);

int my_find_prime_sup(int);

char *my_strcpy(char *, char const *);

char *my_strncpy(char *, char const *, int);

char *my_revstr(char *);

char *my_strstr(char *, char const *);

int my_strcmp(char const *, char const *);

int my_strncmp(char const *, char const *, int);

char *my_strupcase(char *);

char *my_strlowcase(char *);

char *my_strcapitalize(char *);

int my_str_isalpha(char const *);

int my_str_isnum(char const *);

int my_str_islower(char const *);

int my_str_isupper(char const *);

int my_str_isprintable(char const *);

int my_showstr(char const *);

int my_showmen(char const *, int);

char *my_strcat(char *, char const *);

char *my_strncat(char *, char const *, int);

char **str_to_array(int, int, char *, int);

int verif_up(char **, int *, int *);

int verif_down(char **, int *, int *);

int verif_left(char **, int *, int *);

int verif_right(char **, int *, int *);

void move_p(char **, int *, int *, int);

void restart(char ***, int *, int *, anastr *);

int posy(char **str);

int posx(char **str);

void analyse_map(char **, anastr *);

void place_o(char **, anastr *);

void detect_posx(char **, anastr *);

void detect_poso(char **, anastr *);

int detect_x(char **, anastr *);

int detect_xo(char **, anastr *);

void close_win(void);

void open_win(char **, anastr *);

void resize_win(anastr *);
