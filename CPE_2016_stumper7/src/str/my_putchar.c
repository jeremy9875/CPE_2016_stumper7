/*
** my_putchar.c for my_putchar in /home/jeremy.elkaim/CPE_2016_stumper7/src/str
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:38:41 2017 jeremy elkaim
** Last update Fri Jun  2 15:04:07 2017 jeremy elkaim
*/

#include <unistd.h>
#include "hangman.h"

void	my_putchar(const char c)
{
  write (1, &c, 1);
}
