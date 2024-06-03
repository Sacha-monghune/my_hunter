/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "../include/my.h"

int flag_d(va_list list)
{
    return (my_put_nbr(va_arg(list, int)));
}

int flag_c(va_list list)
{
    (my_putchar(va_arg(list, int)));
    return (1);
}

int flag_s(va_list list)
{
    return (my_putstr(va_arg(list, char *)));
}
