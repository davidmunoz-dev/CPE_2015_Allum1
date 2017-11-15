/*
** my_getnbr_allum1.c for c in /CPE_2015_Allum1/src
** 
** Made by David Munoz
** Login   <munoz_d@epitech.net>
** 
** Started on  Mon Feb 15 15:50:28 2016 David Munoz
** Last update Sun Feb 21 22:04:47 2016 David Munoz
*/

#include <stdio.h>

int	my_getnbr_allum1(char *str)
{
  int   i;
  int   nbr;
  int   neg;

  i = 0;
  nbr = 0;
  neg = 1;
  if (str == NULL)
    return (0);
  while (str[i] == '-')
    {
      neg = neg * -1;
      i++;
    }
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (-2);
      nbr = nbr * 10 + (str[i] - '0');
      i++;
    }
  if ((i = nbr * neg) == -1)
    return (-2);
  return (nbr * neg);
}
