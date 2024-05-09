/*
** EPITECH PROJECT, 2023
** setting_up
** File description:
** setting_up
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **array = malloc(nb_rows * sizeof(char *));

    for (int i = 0; i < nb_rows; i++) {
        array[i] = malloc(nb_cols * sizeof(char));
    }
    return array;
}

void mem_free_2d_array(char **array, int nb_rows, int nb_cols)
{
    for (int i = 0; i < nb_rows; i++) {
        free(array[i]);
    }
    free(array);
}

char **str_to_array(int h, int l, char *str, int taille)
{
    int i = 0;
    int k;
    char **str2d = mem_alloc_2d_array(h, l);

    for (int j = 0; j < h; j++) {
        for (k = 0; k < l && i < taille && str[i] != '\n'; k++) {
            str2d[j][k] = str[i];
            i++;
        }
        if (i < taille && str[i] == '\n') {
            str2d[j][k] = str[i];
            i++;
        }
        for (; k < l; k++) {
            str2d[j][k] = ' ';
        }
    }
    return str2d;
}
