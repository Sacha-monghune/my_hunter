/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include <SFML/Graphics.h>
#include <time.h>
#include "include/my.h"
#include "include/struct.h"
#include <stdlib.h>
#include <SFML/Audio.h>

void destroy(sfMusic *son, sfRenderWindow *window,
    sfTexture *texture, sfSprite *sprite)
{
    sfRenderWindow_destroy(window);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
    sfMusic_destroy(son);
}

score_t init_score(void)
{
    score_t score;

    score.point = 0;
    score.life = 3;
    score.v = 5;
    return score;
}

int my_hunter(void)
{
    var_t var = init_struct();
    sfIntRect rect = init_rect(rect);
    sfVector2f position = set_position_sprite(position);
    sfClock *clock = sfClock_create();
    sfTime time;
    float seconds;
    score_t score = init_score();

    while (sfRenderWindow_isOpen(var.window)) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 200000.0;
        if (seconds > 0.5) {
            move_rect(&rect, 110, 330);
            sfClock_restart(clock);
        }
        score.v = reset_position(&position, &score, var.window, score.v);
        position = sprite(var, position, rect, &score);
    }
    destroy(var.son, var.window, var.texture, var.sprite);
    return (0);
}
