/*
** EPITECH PROJECT, 2023
** ..
** File description:
** ..
*/

#ifndef MY_H
    #define MY_H
    #include <SFML/Graphics.h>
    #include "struct.h"
    #include <stdarg.h>

sfIntRect init_rect(sfIntRect rect);
void move_rect(sfIntRect *rect, int offset, int max_value);
var_t init_struct(void);
void analyse_events(sfRenderWindow *window, sfEvent event,
    sfVector2f *position, score_t *score);
int my_hunter(void);
void manage_mouse_click(sfMouseButtonEvent event,
    sfVector2f *position, score_t *score);
sfVector2f set_position_sprite(sfVector2f position);
sfVector2f sprite(var_t var, sfVector2f position,
    sfIntRect rect, score_t *score);
float reset_position(sfVector2f *position, score_t *score,
    sfRenderWindow *window, float vitesse);
int my_printf(const char *restrict format, ...);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int flag_d(va_list list);
int flag_c(va_list list);
int flag_s(va_list list);
void my_putchar(char c);
int fonction(char c, va_list list);

typedef struct flag{
    char c;
    int (*fonction)(va_list);
} flag_t;
#endif
