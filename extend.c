/*
** extend.c for ex in /home/pera_s/CPE_2015_Allum1
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Feb 15 21:56:11 2016 simon pera
** Last update Fri Feb 19 20:31:15 2016 simon pera
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
  my_putstr("AI's turn...\n");
  pp->line = pp->nb_matches = 1;
  verif(pp);
  suiv(pp);
}

void	extend(t_pp *pp)
{
  pp->nb_matches = pp->line = pp->flag = 0;
  line(pp);
  matches(pp);
}
