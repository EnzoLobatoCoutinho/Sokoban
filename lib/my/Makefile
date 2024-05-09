##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## lll
##

SRC	=	my_compute_power_rec.c	\
		my_compute_square_root.c\
		my_find_prime_sup.c		\
		my_getnbr.c				\
		my_isneg.c				\
		my_is_prime.c			\
		my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c				\
		my_revstr.c				\
		my_showmem.c			\
		my_showstr.c			\
		my_sort_int_array.c		\
		my_strcapitalize.c		\
		my_strcat.c				\
		my_strcmp.c				\
		my_strcpy.c				\
		my_str_isalpha.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_str_isprintable.c	\
		my_str_isupper.c		\
		my_strlen.c				\
		my_strlowcase.c			\
		my_strncat.c			\
		my_strncmp.c			\
		my_strncpy.c			\
		my_strstr.c				\
		my_strupcase.c			\
		my_swap.c				\
		my_hexa_min.c			\
		my_hexa_maj.c			\
		my_convert_octal.c		\
		my_put_float.c			\
		condition_verif.c 		\
		my_printf.c				\
		my_put_double.c			\
		my_put_scient.c			\
		my_put_scientmaj.c		\
		my_put_g.c				\
		my_putnbr_base.c		\
		my_put_gmaj.c			\
		my_put_unsigned.c		\
		my_put_scientg.c		\
		my_put_doubleg.c		\
		my_nbr_detect.c			\
		my_put_point.c			\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

HEADER	=	my.h

HEADERC	=	../../include/my.h

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ../..
	cp $(HEADER) ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f ../../$(NAME)
	rm -f $(NAME)

re:	fclean all
