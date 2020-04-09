##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC = my_putstr.c \
	my_strlen.c \
	my_putchar.c \
	my_put_nbr.c \
	my_strcmp.c \
	my_getnbr.c \
	my_str_to_word_array.c

OBJ = my_putstr.o \
	my_strlen.o \
	my_putchar.o \
	my_put_nbr.o \
	my_strcmp.o \
	my_getnbr.o \
	my_str_to_word_array.o

LIBNAME = libmy.a

all: compile clean

compile:
	gcc -c -Wall -Wextra -I../../include $(SRC); ar rc $(LIBNAME) $(OBJ); mv $(LIBNAME) ../../

clean:
	rm -f $(OBJ)

fclean: clean

re : fclean all