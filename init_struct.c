/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "include/my.h"
#include "include/struct.h"
#include <SFML/Graphics.h>
#include <time.h>
#include <SFML/Audio.h>

var_t init_struct(void)
{
    var_t var;
    sfVideoMode video_mode;

    video_mode.width = 1909;
    video_mode.height = 1080;
    video_mode.bitsPerPixel = 32;
    var.window = sfRenderWindow_create(video_mode, "My_hunter", sfDefaultStyle,
    NULL);
    var.texture = sfTexture_createFromFile(
    "B-MUL-100_Bootstrap_my_hunter_spritesheet.png", NULL);
    var.texture_bg = sfTexture_createFromFile("Background.png", NULL);
    var.sprite = sfSprite_create();
    var.sprite_bg = sfSprite_create();
    var.clock = sfClock_create();
    var.son = sfMusic_createFromFile(
    "Nyan Cat! [Official] [TubeRipper.com].ogg");
    sfMusic_setVolume(var.son, 45);
    sfMusic_play(var.son);
    return var;
}
