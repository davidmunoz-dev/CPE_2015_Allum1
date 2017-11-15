/*
** main.c for d in /rendu_ProgElem/CPE_2015_Allum1/src
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Feb  9 23:25:53 2016 David Munoz
** Last update Sun Feb 21 22:42:03 2016 David Munoz
*/

#include "my.h"
#include "my_allum1.h"

void	welcome_print_board()
{
  my_putstr(CADRE);
  my_putstr("*   |   *\n");
  my_putstr("*  |||  *\n");
  my_putstr("* ||||| *\n");
  my_putstr("*|||||||*\n");
  my_putstr(CADRE);
}

int	my_prompt(char **tab)
{
  int	turn;
  int	lenght;
  int	joueur;
  int	match;

  lenght = 16;
  while (lenght != 0)
    {
      turn = display_turn_players();
      joueur = turn % 2;
      if (joueur == 1)
	{
	  if ((match = print_game(tab)) == -1)
	    return (-1);
	}
      else if (joueur == 0)
	{
	  if ((match = print_game_ia(tab)) == - 1)
	    return (-1);
	}
      turn++;
      lenght = lenght - match;
    }
  end_of_game(joueur);
  return (0);
}

int	main(int ac, char **av)
{
  char	**tab;

  (void)av;
  tab = my_init_tab();
  if (ac == 1)
    {
      welcome_print_board();
      if (my_prompt(tab) == -1)
	return (-1);
      free_tab(tab, 4);
      return (0);
    }
  else
    {
      my_putstr("ERROR : No argument needed\n");
      return (1);
    }
}
