/*
** ft.c for ft in /home/pera_s/CPE_2015_Allum1
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Thu Feb 18 21:44:18 2016 simon pera
** Last update Fri Feb 19 23:29:36 2016 simon pera
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int	moins(t_pp *pp)
{
  int	i;

  i = 0;
  while (pp->buf[i] != '\0')
    {
      if ((pp->buf[i] >= 48 && pp->buf[i] <= 57) && (pp->buf[0] != '\n'))
	return (pp->ver1 = 1);
      else
	{
	  my_putstr("Error: invalid input (positive number expected)\n");
	  return (pp->ver1 = 0);
	}
      i++;
    }
  return (pp->ver1 = 1);
}

void	verif_line(t_pp *pp)
{
  while(pp->ver1 != 1 || pp->ver2 != 1)
    {
      moins(pp);
      if (pp->ver1 != 0)
	{
	  if ((pp->buf[0] == '0') || (my_getnbr(pp->buf) > pp->li))
	    {
	      my_putstr("Error: this line is out of range\n");
	      pp->ver2 = 0;
	    }
	  else
	    pp->ver2 = 1;
	}
      if (pp->ver1 == 0 || pp->ver2 == 0)
	{
	  my_putstr("Line: ");
	  read(0, pp->buf, 4096);
	}
    }
}

  void	line(t_pp *pp)
  {
    pp->ver1 = pp->ver2 = 0;
    my_putstr("Your turn:\n");
    my_putstr("Line: ");
    read(0, pp->buf, 4096);
    verif_line(pp);
    pp->line = my_getnbr(pp->buf);
    pp->ver1 = pp->ver2 = 0;
  }

void	verif_matches(t_pp *pp)
{
  while(pp->ver1 != 1 || pp->ver2 != 1)
    {
      moins(pp);
      if (pp->ver1 != 0)
	{
	  pp->v = my_getnbr(pp->buf);
	  if ((pp->buf[0] == '0'))
	    {
	      my_putstr("Error: you have to remove at least one match\n");
	      pp->ver2 = 0;
	    }
	  else if ((pp->li == 1 && pp->v > 1) || (pp->v > pp->line + 1))
	    my_putstr("Error: not enough matches on this line\n");
	  else
	    pp->ver2 = 1;
	}
      if (pp->ver1 == 0 || pp->ver2 == 0)
	{
	  my_putstr("line: ");
	  my_put_nbr(pp->line);
	  my_putchar('\n');
	  my_putstr("Matches: ");
	  read(0, pp->buf, 4096);
	}
    }
}

  void	matches(t_pp *pp)
  {
    my_putstr("Matches: ");
    read(0, pp->buf, 4096);
    verif_matches(pp);
    pp->ver1 = pp->ver2 = 0;
    pp->nb_matches = my_getnbr(pp->buf);
    verif(pp);
    suiv(pp);
  }
