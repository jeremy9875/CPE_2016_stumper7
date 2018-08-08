/*
** count_words.c for hangman in /home/Spiki/Colles/CPE_2016_stumper7
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Fri Jun  2 15:34:45 2017 Filliat Etienne
** Last update Fri Jun  2 15:36:21 2017 Filliat Etienne
*/

int	count_words(const char *str)
{
  int	i;
  int	count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	count++;
      i++;
    }
  return (count);
}
