/*
** my_put_nbr.c for my_put_nbr in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:48:50 2017 jeremy elkaim
** Last update Fri Jun  2 14:54:41 2017 jeremy elkaim
*/

#include "hangman.h"

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar ('-');
      nb = nb * - 1;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + 48);
    }
  if (nb < 10)
    my_putchar(nb % 10 + 48);
  return (nb);
}
