/*
** error.c for d in /CPE_2015_Allum1/src
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Sun Feb 21 19:25:13 2016 David Munoz
** Last update Sun Feb 21 22:36:36 2016 David Munoz
*/

#include "my.h"
#include "my_allum1.h"

int	error_line(char **tab, int nb)
{
  int	error;

  if (nb < 0 || (nb == 0 || nb > 4))
    {
      if (nb < 0)
        my_putstr(RED"Error: invalid input (positive number expected)\n"BLANK);
      else if (nb == 0 || nb > 4)
        my_putstr(RED"Error: this line is out of range\n"BLANK);
      if ((nb = print_line(tab)) == -1)
	return (-1);
    }
  if ((error = my_check_error(tab[nb - 1])) == 0)
    {
      my_putstr(RED"Error: this line is empty\n"BLANK);
      if ((nb = print_line(tab)) == -1)
	return (-1);
    }
  return (nb);
}

void	end_of_game(int joueur)
{
  if (joueur == 0)
    my_putstr("I lost.. snif.. but I'll get you next time!!\n");
  else if (joueur == 1)
    my_putstr("You lose, too bad..\n");
}
