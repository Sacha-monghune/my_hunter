/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "include/my.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc == 1) {
        return (my_hunter());
    } else if (argc == 2 && argv[1][0] == '-' &&
        argv[1][1] == 'h' && argv[1][2] == '\0') {
        my_printf("Ceci est un programme qui vise");
        my_printf(" à refaire Duck Hunt\n");
        my_printf("Pour lancer le jeu, faites ");
        my_printf("'make', puis './my_hunter'\n");
        my_printf("Le but est de tirer sur les canards.");
        my_printf(" Pour cela vous avez 3 vies, et si vous");
        my_printf(" laissez un canard passez, vous perdez 1 vies.\n");
    } else {
        return 84;
    }
}
