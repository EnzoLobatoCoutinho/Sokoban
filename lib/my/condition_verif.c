/*
** EPITECH PROJECT, 2023
** mini_printf2
** File description:
** kk
*/

#include <stdarg.h>
#include "my.h"

static void verification_fifth(const char *format, int i, va_list ap)
{
    int unit;

    if (format[i + 1] == ' ' && format[i + 2] != 's' && format[i + 2] != 'c') {
        my_putchar(' ');
        verification(format, i + 1, ap);
    }
    if (format[i + 1] == ' ' && format[i + 2] == 's' || format[i + 2] == 'c') {
        verification(format, i + 1, ap);
    }
    if ((format[i + 1] == '#') && (format[i + 2] == 'o')) {
        my_putchar('0');
        verification(format, i + 2, ap);
    }
    if (format[i] == '%' && format[i + 3] == 'f') {
        unit = format[i + 2];
        if (format[i + 2] >= 48 && format[i + 2] <= 57){
            my_put_point(va_arg(ap, double), unit - 48);
        }
    }
}

void verification_four(const char *format, int i, va_list ap)
{
    if ( format[i + 1] == 'G' )
        my_put_gmaj(va_arg(ap, double));
    if (format[i + 1] == '+' && format[i + 2] != 's' && format[i + 2] != 'c'){
        my_printf("+");
        verification(format, i + 1, ap);
    }
    if (format[i + 1] == '+' && format[i + 2] == 's' || format[i + 2] == 'c') {
        verification(format, i + 1, ap);
    }
    if ( format[i + 1] == '-' ) {
        verification(format, i + 1, ap);
    }
    if ( format[i + 1] == '*' && format[i + 2] == 's') {
        verification(format, i + 1, ap);
    }
    if ( format[i + 1] == 'u')
        my_put_unsinged(va_arg(ap, int));
    verification_fifth(format, i, ap);
}

void verification_three(const char *format, int i, va_list ap)
{
    if ( (format[i + 1] == '#') && (format[i + 2] == 'X')) {
        my_printf("0X");
        verification(format, i + 2, ap);
    }
    if ( format[i + 1] == 'x' )
        my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
    if ((format[i + 1] == '#') && (format[i + 2] == 'x')) {
        my_printf("0x");
        verification(format, i + 2, ap);
    }
    if ((format[i + 1] == '#') && (format[i + 2] != 'x' || 'X' || 'o'))
        verification(format, i + 1, ap);
    if ( format[i + 1] == 'f' || format[i + 1] == 'F')
        my_put_float(va_arg(ap, double));
    if ( format[i + 1] == 'e' )
        my_put_scient(va_arg(ap, double));
    if ( format[i + 1] == 'E' )
        my_put_scientmaj(va_arg(ap, double));
    verification_four(format, i, ap);
}

void verification_two(const char *format, int i, va_list ap)
{
    if ( format[i + 1] == 'l' && format[i + 2] == 'f')
        my_put_double(va_arg(ap, double));
    if ( format[i + 1] == 'L' && format[i + 2] == 'f')
        my_put_double(va_arg(ap, double));
    if ( format[i + 1] == '%' )
        my_putchar('%');
    if ( format[i + 1] == 'o' )
        my_convert_octal(va_arg(ap, int));
    if ((format[i + 1] == '-') && (format[i + 2] == 'o')) {
        my_putchar('0');
        my_convert_octal(va_arg(ap, int));
    }
    if ( format[i + 1] == 'X' ) {
        my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
    }
    verification_three(format, i, ap);
}

void verification(const char *format, int i, va_list ap)
{
    if ( format[i + 1] == 's' )
        my_putstr(va_arg(ap, char *));
    if ( format[i + 1] == 'd' )
        my_put_nbr(va_arg(ap, int));
    if ( format[i + 1] == 'i' )
        my_put_nbr(va_arg(ap, int));
    if ( format[i + 1] == 'c' )
        my_putchar(va_arg(ap, int));
    if ( format[i + 1] == 'l' && format[i + 2] == 'd')
        my_put_long(va_arg(ap, long int));
    if ( format[i + 1] == 'g')
        my_put_g(va_arg(ap, double));
    if ( format[i + 1] == 'p') {
        my_printf("0x");
        my_putnbr_base(va_arg(ap, unsigned long long), "0123456789abcdef");
    }
    verification_two(format, i, ap);
}
