/*
** read_file.c for hangman in /home/Spiki/Colles/CPE_2016_stumper7/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Fri Jun  2 14:28:54 2017 Filliat Etienne
** Last update Fri Jun  2 16:49:25 2017 Filliat Etienne
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "hangman.h"

static char	*my_memset(char *buffer, char c, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      buffer[i] = c;
      i++;
    }
  buffer[i] = '\0';
  return (buffer);
}

static int	get_file_size(const char *pathname)
{
  int	fd;
  int	count;
  char	*buffer;

  count = 0;
  if ((fd = open(pathname, O_RDONLY)) == -1)
    return (FAILURE);
  if ((buffer = malloc(sizeof(char) * 11)) == NULL)
    return (FAILURE);
  buffer = my_memset(buffer, '\0', 10);
  while (read(fd, buffer, 10) != 0)
    {
      count = count +  my_strlen(buffer);
      free(buffer);
      if ((buffer = malloc(sizeof(char) * 11)) == NULL)
	return (FAILURE);
      buffer = my_memset(buffer, '\0', 10);
    }
  count = count + my_strlen(buffer);
  free(buffer);
  if (close(fd) == -1)
    return (FAILURE);
  return (count);
}

static char	*get_dictionary(const char *pathname,
				const int size)
{
  int	fd;
  char	*dico;
  
  if ((fd = open(pathname, O_RDONLY)) == -1)
    return (NULL);
  if ((dico = malloc(sizeof(char) * size + 1)) == NULL)
    return (NULL);
  dico[size + 1] = '\0';
  if (read(fd, dico, size) == -1)
    return (NULL);
  if (close(fd) == -1)
    return (NULL);
  return (dico);
}


char	*get_word(char *pathname)
{
  int	size;
  char	*word;
  char	*dico;

  srand(getpid());
  if ((size = get_file_size(pathname)) == FAILURE)
    return (NULL);
  if ((dico = get_dictionary(pathname, size)) == NULL)
    return (NULL);
  if (check_valid_dico(dico) == FAILURE)
    return (NULL);
  size = count_words(dico);
  if ((word = choose_word(dico, size)) == NULL)
    return (NULL);
  return (word);
}
