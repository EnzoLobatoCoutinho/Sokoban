##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## lll
##

all:
	$(MAKE) -C lib/my
	gcc -o my_sokoban src/*.c -L./lib/my -lmy -I./include -lncurses

clean:
	$(MAKE) -C lib/my clean

fclean:
	rm -f my_sokoban
	$(MAKE) -C lib/my fclean

re:
	$(MAKE) -C lib/my re
