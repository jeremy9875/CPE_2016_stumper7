/*
** main_test.c for hangman in /home/Spiki/Colles/CPE_2016_stumper7
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Fri Jun  2 14:44:09 2017 Filliat Etienne
** Last update Fri Jun  2 16:55:34 2017 Filliat Etienne
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hangman.h"

int	check_valid_dico(const char *dico)
{
  int	i;

  i = 0;
  while (dico[i] != '\0')
    {
      if (dico[i] == '\n')
	i++;
      else if ((dico[i] >= 'A' && dico[i] <= 'Z')
	  || (dico[i] >= 'a' && dico[i] <= 'z') || dico[i] == '-')
	i++;
      else
	return (FAILURE);
    }
  return (0);
}

char	*get_n_word(const char *dico, int nbr)
{
  int	i;
  int	word_size;
  char	*word;
  
  i = 0;
  while (nbr > 0 && dico[i] != '\0')
    {
      if (dico[i] == '\n')
	nbr = nbr - 1;
      i++;
    }
  word_size = my_strlen_mod(&dico[i]) + 1;
  if ((word = malloc(sizeof(char) * word_size)) == NULL)
    return (NULL);
  word = my_strncpy(word, &dico[i], word_size);
  return (word);
}

char	*choose_word(const char *dico, const int size)
{
  int	nbr;
  char	*word;
  
  nbr = rand() % size;
  if ((word = get_n_word(dico, nbr)) == NULL)
    return (NULL);
  return (word);
}

