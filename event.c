/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#include "include/my.h"
#include "include/struct.h"
#include <SFML/Graphics.h>

void analyse_events(sfRenderWindow *window, sfEvent event,
    sfVector2f *position, score_t *score)
{
    sfRenderWindow_setFramerateLimit(window, 144);
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            manage_mouse_click(event.mouseButton, position, score);
        }
    }
}
