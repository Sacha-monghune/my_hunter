/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "include/struct.h"
#include <stdio.h>

void manage_mouse_click(sfMouseButtonEvent event,
    sfVector2f *position, score_t *score)
{
    int nb = rand() % 400 + 10;

    if (event.x >= position->x && event.x <= position->x + 110 &&
        event.y >= position->y && event.y <= position->y + 110) {
        position->x = -199;
        position->y = nb;
        score->point = score->point + 100;
        score->v += 0.5;
    }
}
