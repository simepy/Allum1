/*
** my_putnbr.c for putnbr in /home/pera_s/Piscine_C_AP
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Thu Oct 15 14:19:30 2015 simon pera
** Last update Mon Feb  1 20:27:50 2016 simon pera
*/

#include <unistd.h>
#include "../../include/my.h"

int	my_put_nbr(int nbr)
{
  int	div;
  int	stock;
  int	tmp;
  int	i;

  i = 0;
  div = 1000000000;
  while (div != 0)
    {
      if (nbr < 0)
	{
	  my_putchar('-');
	  nbr = nbr * -1;
	}
      stock = nbr / div;
      if (stock != 0)
	{
	  tmp = stock % 10;
	  my_putchar(tmp + 48);
	}
      div = div / 10;
    }
}
