/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** task05
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int printf_calc3(const char *format, int i, va_list ap)
{
    if ( format[i] == '%' && format[i + 1] == 'e' || format[i + 1] == 'f') {
        verification(format, i, ap);
        return 1;
    }
    if ( format[i] == '%' && format[i + 1] == 'F') {
        verification(format, i, ap);
        return 1;
    }
    if ( format[i + 1] == '.') {
        verification(format, i, ap);
        return 3;
    }
    if ( format[i] == '%' && format[i + 1] == 'g') {
        verification(format, i, ap);
        return 1;
    }
    return 0;
}

int printf_calc2(const char *format, int i, va_list ap)
{
    if (format[i] == '%' && format[i + 1] == 'i' || format[i + 1] == 'c') {
        verification(format, i, ap);
        return 1;
    }
    if (format[i] == '%' && format[i + 1] == '%' || format[i + 1] == 'X') {
        verification(format, i, ap);
        return 1;
    }
    if (format[i] == '%' && format[i + 1] == 's' || format[i + 1] == 'd'){
        verification(format, i, ap);
        return 1;
    }
    if (format[i] == '%' && format[i + 1] == 'o' || format[i + 1] == 'x'){
        verification(format, i, ap);
        return 1;
    }
    printf_calc3(format, i, ap);
}

int printf_calc(const char *format, int i, va_list ap)
{
    if ( format[i] == '%' && (format[i + 1] == 'L' || format[i + 1] == 'l')) {
        verification(format, i, ap);
        return 2;
    }
    if ( format[i] == '%' && (format[i + 1] == '+' || format[i + 1] == '#')) {
        verification(format, i, ap);
        return 2;
    }
    if ( format[i] == '%' && format[i + 1] == '-' || format[i + 1] == ' ') {
        verification(format, i, ap);
        return 2;
    }
    if (format[i] == '%' && format[i + 1] == 'u' || format[i + 1] == 'E') {
        verification(format, i, ap);
        return 1;
    }
    printf_calc2(format, i, ap);
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int re;

    va_start(ap, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            re = printf_calc(format, i, ap);
            i = i + re;
        } else {
            write(1, &format[i], 1);
        }
    }
    return 0;
}
