/*
** my_putstr.c for my_putstr in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:39:13 2017 jeremy elkaim
** Last update Fri Jun  2 15:03:45 2017 jeremy elkaim
*/

#include <unistd.h>
#include "hangman.h"

void	my_putstr(const char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
