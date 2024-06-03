##
## EPITECH PROJECT, 2023
## ..
## File description:
## ..
##

SRC	=	my_hunter.c \
		rect.c \
		init_struct.c \
		event.c \
		main.c \
		mouse_click.c \
		position_sprite.c \
		set_and_draw.c \
		lib/my_put_nbr.c \
		lib/my_putstr.c \
		lib/printf.c \
		lib/flag_1.c \
		lib/my_putchar.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

FLAG  = -l csfml-graphics -l csfml-window -l csfml-system -lcsfml-audio

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(SRC) -o $(NAME) $(FLAG)

clean:
	rm -f *.o
	rm -f lib/*.o
	rm -f $(NAME)

fclean : clean
	rm -rf $(NAME)

re: fclean all
