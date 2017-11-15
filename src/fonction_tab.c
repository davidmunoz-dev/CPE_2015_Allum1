/*
** main.c for d in /rendu_ProgElem/CPE_2015_Allum1/src
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Tue Feb  9 23:25:53 2016 David Munoz
** Last update Sun Feb 21 22:46:56 2016 David Munoz
*/

#include "my.h"
#include "my_allum1.h"

int	my_check_error(char *str)
{
  int	i;
  int	a;

  i = 0;
  a = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '|')
	a++;
      i++;
    }
  return (a);
}

int	my_strlen_board(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && str[i] == '|')
    i++;
  return (i);
}

void	print_game_board(int line, int match, char *tab[])
{
  int	a;
  int	b;

  a = my_strlen_board(tab[line - 1]) - 1;
  b = a;
  while (a > (b - match))
    {
      tab[line - 1][a]= ' ';
      a--;
    }
  my_putstr(CADRE);
  my_printf("*   %s   *\n", tab[0]);
  my_printf("*  %s  *\n", tab[1]);
  my_printf("* %s *\n", tab[2]);
  my_printf("*%s*\n", tab[3]);
  my_putstr(CADRE);
}

char	**my_init_tab()
{
  char	**tab;
  int	y;
  int	x;
  int	alumette;

  alumette = 1;
  y = -1;
  tab = malloc(5 * sizeof(*tab));
  while (++y < 4)
    {
      tab[y] = malloc(8 * sizeof(**tab));
      x = -1;
      while (++x < alumette)
        tab[y][x] = '|';
      alumette = alumette + 2;
    }
  return (tab);
}

void	free_tab(char **tab, int line)
{
  int	i;

  i = 0;
  while (i < line)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}
