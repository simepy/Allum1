/*
** my_putchar.c for putchar in /home/pera_s/Piscine_C_workshoplib/lib/my
** 
** Made by simon pera
** Login   <pera_s@epitech.net>
** 
** Started on  Sat Oct 17 17:27:02 2015 simon pera
** Last update Wed Dec 16 15:37:24 2015 simon pera
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
