/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "include/my.h"
#include "include/struct.h"
#include <SFML/Graphics.h>
#include "include/struct.h"
#include <SFML/Audio.h>

sfVector2f sprite(var_t var, sfVector2f position, sfIntRect rect,
    score_t *score)
{
    sfEvent event;

    sfSprite_setTexture(var.sprite_bg, var.texture_bg, sfTrue);
    sfSprite_setTexture(var.sprite, var.texture, sfTrue);
    analyse_events(var.window, event, &position, score);
    sfSprite_setTextureRect(var.sprite, rect);
    sfSprite_setPosition(var.sprite, position);
    sfRenderWindow_clear(var.window, sfCyan);
    sfRenderWindow_drawSprite(var.window, var.sprite_bg, NULL);
    sfRenderWindow_drawSprite(var.window, var.sprite, NULL);
    sfRenderWindow_display(var.window);
    return position;
}
