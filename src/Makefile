##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC = src/main.c

LIBMY = libmy.a

CFLAGS = -Wall -Wextra -pedantic

EXE = lem_in

all: make compile

make:
	cd lib/my && make

compile:
	gcc $(CFLAGS) -Iinclude $(SRC) -L -lmy $(LIBMY) -o $(EXE)

gdb:
	gcc $(CFLAGS) -g3 -Iinclude  $(SRC) -L -lmy $(LIBMY) -o $(EXE); gdb $(EXE)

valgrind:
	gcc $(CFLAGS) -g3 -Iinclude $(SRC) -L -lmy $(LIBMY) -o $(EXE); valgrind --leak-check=full --track-origins=yes -s ./$(EXE)

debug:
	gcc -Wall -Wextra -g3 -Iinclude  $(SRC) -L -lmy $(LIBMY) -o $(EXE)

clean:
	rm -f $(EXE)

fclean: clean
	rm -f $(LIBMY)

re : fclean all

.PHONY: all clean fclean re