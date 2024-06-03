/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** mini_printf
*/

#include <stdarg.h>
#include "../include/my.h"
#include <stddef.h>

flag_t TAB[] = {
    {'d', &flag_d} ,
    {'i', &flag_d} ,
    {'c', &flag_c} ,
    {'s', &flag_s} ,
    {'\0', NULL} ,
};

int fonction(char c, va_list list)
{
    int cmp = 0;

    while (TAB[cmp].c != '\0') {
        if (TAB[cmp].c == c) {
            return (TAB[cmp].fonction(list));
        }
        cmp = cmp + 1;
    }
    return 0;
}

int my_printf(const char *restrict format, ...)
{
    int i = 0;
    int cmpt = 0;
    va_list list;

    va_start(list, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i = i + 1;
            cmpt = cmpt + fonction(format[i], list);
        } else {
            my_putchar(format[i]);
            cmpt = cmpt + 1;
        }
        i = i + 1;
    }
    va_end(list);
    return cmpt;
}
