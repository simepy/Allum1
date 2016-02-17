/*
** my_getnbr.c for getnbr in /home/pera_s/Piscine_C_AP
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Thu Oct 15 18:05:56 2015 simon pera
** Last update Tue Feb 16 11:40:13 2016 simon pera
*/

#include <stdio.h>
#include <unistd.h>
#include "../../include/my.h"

int	my_getnbr(char *str)
{
  int	i;
  int	nbr;
  int	tmp;
  int	flag;

  if (str == NULL)
    return (-1);
  nbr = i = flag = 0;
  while (str[i] != '\0')
    {
      if (str[0] == '-')
	{
	  flag = 1;
	  i = i + 1;
	}
      if (str[i] >= 48 && str[i] <= 57)
	{
	  tmp = str[i] - '0';
	  nbr = nbr * 10 + tmp;
	}
      i = i + 1;
    }
  if (flag == 1)
    my_putchar('-');
  return (nbr);
}
