/*
** game_loop.c for game_loop in /home/jeremy.elkaim/CPE_2016_stumper7/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 15:46:17 2017 jeremy elkaim
** Last update Fri Jun  2 17:49:36 2017 jeremy elkaim
*/

#include "hangman.h"

int	star(char *word)
{
  int	i;

  i = 0;
  while (word[i] != '\0')
    {
      if (word[i] == '*')
	return (1);
      i = i + 1;
    }
  return (0);
}

char	*my_star(char *word)
{
  char	*star;
  int	i;

  i =  my_strlen(word);
  star = malloc(sizeof(char) * i);
  i = 0;
  while (word[i] != '\0')
    {
      star[i] = '*';
      i = i + 1;
    }
  return (star);
}

int	badletter(int tries, char *buffer)
{
  my_putstr(buffer);
  my_putstr(": is not in this word");
  tries--;
  my_putchar('\n');
  return (tries);
}

int	game_loop(char *word, int tries)
{
  char	*buffer[5];
  char	*star;

  star = my_star(word);
  while (tries != 0 && star(star) != 0)
    {
      my_putstr(star);
      my_putchar('\n');
      my_putstr("Tries: ");
      my_putnbr(tries);
      my_putchar('\n');
      if (checkwinorlose(word, tries) == 0)
	return (0);
      letter();
      if (read(0, 5, buffer) == 0)
	if (my_strlen(buffer) != 1)
	  tries = badletter(tries, buffer);
	else if (star = strstar(buffer, word, star) == NULL)
	  tries = badletter(tries, buffer);
    }
  return (0);
}
