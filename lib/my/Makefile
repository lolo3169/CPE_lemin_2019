##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	= gcc

RM	= rm -f

LIBPATH = ./
LIBSRCS	=	my_put_nbr.c			\
			my_putchar.c			\
			my_putstr.c			\
			my_strlen.c			\
			my_printf.c  		\
			my_getnbr.c  		\
			my_putnbr_base.c          \
			my_str_to_word_array.c          \
			my_strcmp.c          \

LIBSRCS := $(addprefix $(LIBPATH), $(LIBSRCS))
LIB	=	lib

LIBOBJS = $(LIBSRCS:.c=.o)
OBJS_TASK02	= $(SRCS_TASK02:.c=.o)


all: $(LIB) clean
$(LIB): $(LIBOBJS)
	 ar rcs $(LIBPATH)/libmy.a $(LIBOBJS)
clean:
	$(RM) $(LIBOBJS)

fclean: clean
	$(RM) $(LIBPATH)/libmy.a

re: fclean all

.PHONY: all clean fclean re lib
