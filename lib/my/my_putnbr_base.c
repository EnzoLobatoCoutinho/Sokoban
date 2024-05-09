/*
** EPITECH PROJECT, 2023
** putnbr_base
** File description:
** putnbrbase
*/

#include "my.h"

void my_putnbr_base(unsigned long long nb, char *base)
{
    int	i;
    int	len = my_strlen(base);

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    i = nb % len;
    nb = nb / len;
    if (nb > 0) {
        my_putnbr_base(nb, base);
    }
    my_putchar(base[i]);
}
