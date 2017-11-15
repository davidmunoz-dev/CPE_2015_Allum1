/*
** ia.c for a in /CPE_2015_Allum1/src
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Fri Feb 19 11:03:08 2016 David Munoz
** Last update Fri Feb 19 12:43:39 2016 David Munoz
*/

#include "my.h"
#include "my_allum1.h"

int	random_ia (int _iMin, int _iMax)
{
  return (_iMin + (rand () % (_iMax-_iMin+1)));
}

int	print_line_ia(char *tab[])
{
  int	line;
  int	error;

  line = random_ia(1, 4);
  if ((error = my_check_error(tab[line - 1])) == 0)
    line = print_line_ia(tab);
  return (line);
}

int	print_match_ia(int line, char *tab[])
{
  int	match;
  int	error;

  match = random_ia(1, 7);
  error = my_check_error(tab[line - 1]);
  if (match > error)
    match = print_match_ia(line, tab);
  return (match);
}
