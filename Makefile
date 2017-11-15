##
## Makefile for make in /rendu/rendu_Systeme_Unix/PSU_2015_my_ls
##
## Made by munoz david
## Login   <munoz_d@epitech.net>
##
## Started on  Thu Nov 26 22:59:46 2015 munoz david
## Last update Sun Feb 21 19:26:01 2016 David Munoz
##

NAME	= allum1

OBJ	= $(addprefix src/, $(SRC:.c=.o))

SRC	= display_info.c \
	my_getnbr_allum1.c \
	fonction_tab.c \
	ia.c \
	error.c \
	main.c

TMP	= $(SRC:.c=.c~)

CC	= gcc

RM 	= rm -f

LDFLAGS = -L./lib/my/ -lmy

CFLAGS	= -W -Wall -Werror -ansi -pedantic -I./include/ -I/home/${USER}/.froot/include

DIR	= lib/my

all: $(NAME)

$(NAME): $(OBJ)
	@(cd $(DIR) && $(MAKE))
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)
	@echo "\033[1;32m[Allum1] : Program compilated\n\033[0m"

clean:
	$(RM) $(OBJ) $(TMP)
	cd $(DIR) && ($(MAKE) clean)
	@echo "\033[1;31m[Allum1] : Binary files deleted\n\033[0m"

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)
	cd $(DIR) && ($(MAKE) clean)
	@echo "\033[1;31m[Allum1] : Binary and executable files are deleted\n\033[0m"

re: lib fclean all

.PHONY: all clean fclean re lib
