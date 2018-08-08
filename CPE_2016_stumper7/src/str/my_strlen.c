/*
** my_strlen.c for my_strlen in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:40:34 2017 jeremy elkaim
** Last update Fri Jun  2 15:26:11 2017 Filliat Etienne
*/

#include "hangman.h"

int	my_strlen(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

int	my_strlen_mod(const char *str)
{
  int	pos;

  pos = 0;
  while (str[pos] != '\n')
    {
      pos = pos + 1;
    }
  return (pos);
}
