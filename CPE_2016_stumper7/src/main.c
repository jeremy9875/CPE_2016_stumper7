/*
** main.c for main in /home/jeremy.elkaim/CPE_2016_stumper7/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:33:53 2017 jeremy elkaim
** Last update Fri Jun  2 16:58:56 2017 Filliat Etienne
*/

#include <stdio.h>
#include "hangman.h"

int	main(int ac, char **av)
{
  int	status;
  if (av[1])
    printf("%s\n", av[1]);
  if (av[2])
    printf("%s\n", av[2]);
  if (ac >= 2)
      status = parser(av);
  else
    {
      my_putstr(BAD_ARGS);
      return (ERROR);
    }
  return (status);
}
