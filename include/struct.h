/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #include <SFML/Audio.h>

typedef struct var {
    sfRenderWindow *window;
    sfTexture *texture;
    sfTexture *texture_bg;
    sfTexture *texture_life;
    sfSprite *sprite;
    sfSprite *sprite_bg;
    sfSprite *sprite_life;
    sfVector2f vector;
    sfClock *clock;
    sfTime time;
    sfMusic *son;
    float seconds;
} var_t;

typedef struct score {
    int point;
    int life;
    float v;
} score_t;
#endif
