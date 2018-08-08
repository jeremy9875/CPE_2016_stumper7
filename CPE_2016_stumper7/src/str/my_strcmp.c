/*
** my_strcmp.c for my_strcmp in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 15:06:36 2017 jeremy elkaim
** Last update Fri Jun  2 15:08:27 2017 jeremy elkaim
*/

#include <hangman.h>

int	my_strcmp(const char *str,const char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      if (str[i] == cmp[i])
	return (1);
      i = i + 1;
    }
  return (0);
}
