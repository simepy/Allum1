/*
** extend.c for ex in /home/pera_s/CPE_2015_Allum1
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Feb 15 21:56:11 2016 simon pera
** Last update Sat Feb 20 18:30:59 2016 simon pera
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void	error(t_pp *pp)
 {
  int	i;

  i = 0;
  while (pp->buf[i] != '\0')
    {
      if (pp->buf[i] < 48 && pp->buf[i] > 57)
	my_putstr("Error: invalid input (positive number expected)\n");
      i++;
    }
}

void	verif(t_pp *pp)
{
  if ((pp->i % 2) == 0)
    {
      my_putstr("Player removed ");
      my_put_nbr(pp->nb_matches);
      my_putstr(" match(es) from line ");
      my_put_nbr(pp->line);
      my_putchar('\n');
    }
  else
    {
      my_putstr("AI removed ");
      my_put_nbr(pp->nb_matches);
      my_putstr(" match(es) from line ");
      my_put_nbr(pp->line);
      my_putchar('\n');
    }
}

void	suiv(t_pp *pp)
{
  up_down(2 * pp->li);
  tab_maxi(pp->li, pp->tab, pp->line, pp->nb_matches);
  up_down(2 * pp->li);
  my_putchar('\n');
}

void	ai(t_pp *pp)
{
  int	i;

  i = pp->line = pp->nb_matches = 0;
  my_putstr("AI's turn...\n");
  while (pp->line == 0)
    pp->line = (rand() % (pp->li + 1));
  while (pp->nb_matches == 0)
    pp->nb_matches = (rand() % ((pp->line * 2) - 1));
  while (pp->tab[pp->line][pp->nb_matches] != '|')
    {
      pp->nb_matches = (rand() % ((pp->line * 2) - 1));
      if (i == ((pp->line * 2) - 1))
	{
	  while (pp->line != 0)
	    pp->line = (rand() % (pp->li + 1));
	}
      i = 0;
      i++;
    }
  verif(pp);
  suiv(pp);
}

void	extend(t_pp *pp)
{
  pp->nb_matches = pp->line = pp->flag = 0;
  line(pp);
  matches(pp);
}
