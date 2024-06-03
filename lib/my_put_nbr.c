/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** my_put_nbr
*/
#include <unistd.h>
#include "../include/my.h"

int my_put_nbr(int nb)
{
    int i = 0;

    if (nb < 0) {
        my_putchar('-');
        i = i + 1;
        nb = -nb;
    }
    if (nb >= 10) {
        i = i + my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    i = i + 1;
    return (i);
}
