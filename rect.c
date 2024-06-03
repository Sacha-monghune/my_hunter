/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "include/my.h"
#include <SFML/Graphics.h>

sfIntRect init_rect(sfIntRect rect_bird)
{
    rect_bird.top = 0;
    rect_bird.left = 0;
    rect_bird.width = 110;
    rect_bird.height = 110;
    return (rect_bird);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value) {
        rect->left = 0;
    }
}
