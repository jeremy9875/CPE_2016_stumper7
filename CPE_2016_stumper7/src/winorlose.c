/*
** winorlose.c for winorlose in /home/jeremy.elkaim/CPE_2016_stumper7/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 15:53:56 2017 jeremy elkaim
** Last update Fri Jun  2 17:40:27 2017 jeremy elkaim
*/

#include "my.h"

int	checkwinorlose(char *word, int tries)
{
  if (tries == 0)
    lose();
  else
    return (1);
  if (star(star) == 0)
    win();
  else
    return (1);
  return (0);
}

      char	*strstar(char *buffer, char *word, char *star)
    {
      int	i;
      int	o;

      o = 0;
      i = 0;
      while (word[i] != '\0')
	{
	  if (buffer[1] == word[i])
	    {
	      star[i] = word[i];
	      o = o + 1;
	    }
	  i = i + 1;
	}
      if (o == 0)
	return (NULL);
      return (star);
    }

      void	win()
    {
      my_pustr("\nCongratulations!");
    }

      void	lose()
    {
      my_pustr("\nYou lost!");
    }

      void	letter()
    {
      my_pustr("\nYour letter: ");
    }
