/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include <stdio.h>

float reset_position(sfVector2f *position, score_t *score,
    sfRenderWindow *window, float v)
{
    int nb = rand() % 500;

    position->x += v;
    if (position->x > 1920) {
        position->x = -200;
        position->y = nb;
        score->life = score->life - 1;
    }
    if (score->point == 2700) {
        my_printf("You Win!! -- Score: %d\n", score->point);
        sfRenderWindow_close(window);
    }
    if (score->life == -1) {
        my_printf("Fin de partie! -- Score finale: %d\n", score->point);
        sfRenderWindow_close(window);
    }
    return v;
}

sfVector2f set_position_sprite(sfVector2f position)
{
    int nb = rand() % 500;

    position.x = -200;
    position.y = nb;
    return position;
}
