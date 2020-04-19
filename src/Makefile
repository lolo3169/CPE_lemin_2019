##
## EPITECH PROJECT, 2019
## MAKEFILE
## File description:
## makefile
##

NAME	= ../lem_in      \

CC	= gcc

RM	= rm -rf

SRCS	= ./main.c \
		  ./getline.c \
		  ./realloc.c \
		  ./error_file_handling.c \

OBJS	= $(SRCS:.c=.o)
CFLAGS += -W -Wall -Wextra -pedantic
LDFLAGS += -I./include -L../lib/my -lmy
DEBUGFLAGS = -g3

all: $(NAME) clean

$(NAME): $(OBJS)
	 $(CC) $(OBJS) -o $(NAME) $(CFLAGS) $(LDFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re