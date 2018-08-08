/*
** my_get_nbr.c for my_get_nbr in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:44:54 2017 jeremy elkaim
** Last update Wed Jun  7 12:35:09 2017 jeremy elkaim
*/

#include "hangman.h"

int	my_get_nbr(const char *str)
{
  int	value;
  int	i;

  value = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  value *= 10;
	  value += (str[i] - 48);
	}
      else
	return (FAILURE);
      i = i + 1;
    }
  return (value);
}
