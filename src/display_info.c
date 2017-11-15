/*
** display.c for h in /rendu_ProgElem/CPE_2015_Allum1/src
**
** Made by David Munoz
** Login   <munoz_d@epitech.net>
**
** Started on  Wed Feb 10 16:26:14 2016 David Munoz
** Last update Fri Feb 26 18:20:35 2016 David Munoz
*/

#include "my.h"
#include "my_allum1.h"

int	display_turn_players()
{
  static int    turn;
  int   resultat;

  resultat = turn % 2;
  if (resultat == 1)
    my_putstr("\nAI's turn...\n");
  else if (resultat == 0)
    my_putstr("\nYour turn:\n");
  turn++;
  return (turn);
}

int	print_line(char **tab)
{
  char	*buff_line;
  int	line;

  buff_line = malloc(8192);
  my_putstr("Line: ");
  if ((line = read(0, buff_line, 8192)) == 0)
    return (-1);
  buff_line[line - 1] = 0;
  line = my_getnbr_allum1(buff_line);
  line = error_line(tab, line);
  return (line);
}

int	print_match(char **tab, t_pr *arg)
{
  char	*buff_match;
  int	match;
  int	error;

  buff_match = malloc(8192);
  my_putstr("Matches: ");
  if ((match = read(0, buff_match, 8192)) == 0)
    return (-1);
  buff_match[match - 1] = 0;
  match = my_getnbr_allum1(buff_match);
  error = my_check_error(tab[arg->line - 1]);
  if (match <= 0 || match > error)
    {
      if (match > error)
	my_putstr(RED"Error: not enough matches on this line\n"BLANK);
      if (match == 0)
        my_putstr(RED"Error: you have to remove at least one match\n"BLANK);
      else if (match < 0)
        my_putstr(RED"Error: invalid input (positive number expected)\n"BLANK);
      if ((arg->line = print_line(tab)) == -1)
        return (-1);
      if ((match = print_match(tab, arg)) == -1)
        return (-1);
    }
  return (match);
}

int	print_game(char **tab)
{
  int	disp_match;
  t_pr	*arg;

  arg = malloc(sizeof(t_pr));
  if ((arg->line = print_line(tab)) == -1)
    return (-1);
  if ((disp_match = print_match(tab, arg)) == -1)
    return (-1);
  my_printf("Player removed %d match(es) ", disp_match);
  my_printf("from line %d\n", arg->line);
  print_game_board(arg->line, disp_match, tab);
  return (disp_match);
}

int	print_game_ia(char **tab)
{
  int   disp_line;
  int   disp_match;

  disp_line = print_line_ia(tab);
  disp_match = print_match_ia(disp_line, tab);
  my_printf("AI removed %d match(es) from line %d\n", disp_match, disp_line);
  print_game_board(disp_line, disp_match, tab);
  return (disp_match);
}
