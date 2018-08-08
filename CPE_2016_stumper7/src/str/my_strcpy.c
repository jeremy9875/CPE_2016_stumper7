/*
** my_strcpy.c for hangman in /home/Spiki/Colles/CPE_2016_stumper7
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Fri Jun  2 16:17:34 2017 Filliat Etienne
** Last update Fri Jun  2 16:23:23 2017 Filliat Etienne
*/

char	*my_strncpy(char *dest, const char *src, int size)
{
  int	i;

  i = 0;
  size = size - 1;
  while (i < size && src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
