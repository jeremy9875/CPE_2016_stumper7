/*
** parser.c for parser in /home/jeremy.elkaim/CPE_2016_stumper7/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 15:05:35 2017 jeremy elkaim
** Last update Fri Jun  2 16:53:30 2017 Filliat Etienne
*/

#include <unistd.h>
#include <hangman.h>

int	parser(char **av)
{
  char	*word;
  int	lives;

  lives = 10;
  if ((word = get_word(av[1])) == NULL)
    {
      my_putstr(INV_FILE);
      return (ERROR);
    }
  if (av[2])
    {
      if ((lives = my_get_nbr(av[2])) == FAILURE)
      {
	my_putstr(INV_LIVES);
	return (ERROR);
      }
    }
  return (0);
}
