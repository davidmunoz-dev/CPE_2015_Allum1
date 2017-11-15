/*
** my_allum1.h for d in /CPE_2015_Allum1/include
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Wed Feb 10 16:39:55 2016 David Munoz
** Last update Sun Feb 21 23:29:20 2016 David Munoz
*/


#ifndef ALLUM1_H_
# define ALLUM1_H_

#define _BSD_SOURCE
#define _POSIX_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

# define RED                    "\033[1;31m"
# define GREEN                  "\033[1;32m"
# define PURPLE                 "\033[1;35m"
# define CYAN                   "\033[1;36m"
# define BROWN                  "\033[0;33m"
# define BLUE                   "\033[1;34m"
# define YELLOW                 "\033[1;33m"
# define BLANK                  "\033[0m"

# define CADRE			"*********\n"

# define TRUE	1
# define FALSE	0

typedef struct s_pr
{
  int	line;
} t_pr;

void	welcome_print_board();
int	my_prompt(char **tab);
int	display_turn_players();
void	display_turn_playing();
int	print_line(char **tab);
int	print_match(char **tab, t_pr *arg);
int	print_game(char **tab);
int	print_game_ia(char **tab);
int	my_getnbr_allum1(char *str);
int	my_check_error(char *str);
int	my_strlen_board(char *str);
void	print_game_board(int line, int match, char *tab[]);
char	**my_init_tab();
void	free_tab(char **tab, int line);
int     print_line_ia(char *tab[]);
int     print_match_ia(int line, char *tab[]);
int     error_line(char **tab, int nb);
void	end_of_game(int joueur);
int     stock_line(int line);

#endif /* ALLUM1_H_ ! */
