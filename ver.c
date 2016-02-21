/*
** ver.c for ver in /home/pera_s/CPE_2015_Allum1
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Sat Feb 20 21:11:54 2016 simon pera
** Last update Sun Feb 21 20:48:47 2016 simon pera
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void	verif_ai(t_pp *pp)
{
  int	i;
  int	z;

  i = z = 0;
  while(i++ != pp->li * 2)
    {
      if (pp->tab[pp->line][i] == '|')
	z++;
    }
  if (pp->nb_matches > z)
    {
      while (pp->nb_matches > z)
	pp->nb_matches = (rand() % ((pp->li * 2) - 1));
    }
}

int     verif_len(t_pp *pp)
{
  pp->x = 0;
  while (pp->x++ != (pp->li * 2))
    {
      if (pp->tab[pp->v][pp->x] == '|')
	return (pp->ver3 = 1);
    }
  my_putstr("Not matche on this line\n");
  return (pp->ver3 = 0);
}

void	end(t_pp *pp)
{
  if (pp->player == 1)
    my_putstr("You lost, too bad..\n");
  else if (pp->ia == 1)
    my_putstr("I lost.. snif.. but I’ll get you next time!!\n");
}

int	verif(t_pp *pp)
{
  int	i;

  i = 0;
  pp->line = 1;
  pp->nb_matches = 1;
  while (pp->tab[pp->line] != '\0')
    {
      while (i != pp->li * 2)
	{
	  if (pp->tab[pp->line][pp->nb_matches] == '|')
	    return (pp->flag2 = 0);
	  i++;
	  pp->nb_matches++;
	}
      i = 0;
      if  (pp->tab[pp->line][pp->nb_matches] == '\0')
	{
	  pp->line++;
	  pp->nb_matches = 1;
	}
    }
  return (pp->flag2 = 1);
}
