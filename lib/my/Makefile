##
## Makefile for makefile in /home/munoz_d/rendu/Piscine_C_J10/lib/my
## 
## Made by munoz david
## Login   <munoz_d@epitech.net>
## 
## Started on  Mon Oct 12 10:18:52 2015 munoz david
## Last update Fri Feb 26 18:26:04 2016 David Munoz
##

SRC=	my_str_isprintable.c \
	my_find_prime_sup.c \
	my_strcapitalize.c \
	my_sort_int_tab.c \
	my_str_islower.c \
	my_str_isalpha.c \
	my_square_root.c \
	my_str_isupper.c \
        fonction_flag2.c \
	my_strlowcase.c \
        fonction_flag.c \
	my_power_rec.c \
	my_str_isnum.c \
	my_strupcase.c \
	my_is_prime.c \
	my_put_nbr.c \
	my_strlcat.c \
	my_putchar.c \
	my_strncat.c \
	my_strncmp.c \
	my_showmem.c \
	my_strncpy.c \
	my_showstr.c \
        my_printf.c \
	my_strcat.c \
	my_strlen.c \
	my_putstr.c \
	my_strcpy.c \
	my_revstr.c \
	my_getnbr.c \
	my_strstr.c \
	my_strcmp.c \
	my_isneg.c \
	my_swap.c \
        flag3.c \
        flag2.c \
        flag.c

CFLAGS  = -W -Wall -Werror -ansi -pedantic

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	cc -c $(SRC) $(CFLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	cp $(NAME) ../
	cp my.h ../../include
	@echo "\033[1;36m[lib/my] : Library compilated \n\033[0m"

clean:
	rm $(OBJ)
	@echo "\033[1;31m[lib/my] : Binary files deleted\n\033[0m"

fclean: 	clean
	rm $(NAME)
	@echo "\033[1;31m[lib/my] : Binary and executable files are deleted\n\033[0m"

re: fclean all
