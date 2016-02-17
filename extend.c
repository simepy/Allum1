/*
** extend.c for ex in /home/pera_s/CPE_2015_Allum1
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Feb 15 21:56:11 2016 simon pera
** Last update Thu Feb 18 00:47:48 2016 simon pera
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

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

int	extend(t_pp *pp)
{
  pp->line = 0;
  pp->nb_matches = 0;
  if (pp->i != 0)
    {
      my_putstr("Your turn:\n");
      my_putstr("Line: ");
      read(0, pp->buf, 4096);
      pp->line = my_getnbr(pp->buf);
      my_putstr("Matches: ");
      read(0, pp->buf, 4096);
      pp->nb_matches = my_getnbr(pp->buf);
      verif(pp);
      suiv(pp);
    }
  else
    print_updated_board_game(pp);
  return (0);
}
