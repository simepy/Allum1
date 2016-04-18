/*
** print_game_board.c for pmb in /home/pera_s/CPE_2015_allum1_bootstrap
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Wed Feb 10 14:19:24 2016 simon pera
** Last update Thu Mar 10 12:32:46 2016 simon pera
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void	up_down(int toto)
{
  int	i;

  i = 0;
  while(i <= toto)
    {
      write(1, "*", 1);
      i++;
    }
  write(1, "\n", 1);
}

char	*espace(int toto, char *tab, int nb_matches)
{
  int	i;

  i = 0;
  toto = toto * 2;
  while (i < nb_matches)
    {
      if (tab[toto] == '|')
	{
	  tab[toto--] = ' ';
	  i++;
	}
      else
	toto--;
    }
  return (tab);
}

void	tab_maxi(int toto, char **tab, int line, int nb_matches)
{
  int	rap;
  int	li;
  int	z;
  int	i;

  tab[line] = espace(toto, tab[line], nb_matches);
  rap = (toto - 1);
  li = toto;
  z = i = 0;
  while (i++ < li)
    {
      write(1, "*", 1);
      while (z++ < rap)
  	write(1, " ", 1);
      while (z <= toto)
	my_putchar(tab[i][z++]);
      z = 0;
      while (z++ < rap)
	write(1, " ", 1);
      z = 0;
      write(1, "*", 1);
      write(1, "\n", 1);
      rap--;
      toto++;
    }
}

void	print_updated_board_game(t_pp *pp)
{
  pp->toto = pp->li = 4;
  pp->rap = (pp->toto - 1);
  pp->z = pp->i = 0;
  if ((pp->tab = malloc(sizeof(char *) * (pp->toto * 2))) == NULL)
    return ;
  while (pp->i++ < pp->li)
    {
      pp->tab[pp->i] = malloc(sizeof(char) * ((pp->li * 2)));
      while (pp->z++ < pp->rap);
      while (pp->z <= pp->toto)
	pp->tab[pp->i][pp->z++] = '|';
      pp->tab[pp->i][pp->z] = '\0';
      pp->z = 0;
      pp->rap--;
      pp->toto++;
    }
  up_down(2 * pp->li);
  tab_maxi(pp->li, pp->tab, pp->line, pp->nb_matches);
  up_down(2 * pp->li);
  my_putchar('\n');
}

int		main()
{
  t_pp		*pp;

  if ((pp = malloc(sizeof(t_pp))) &&
      (pp->buf = malloc(sizeof(char) * 4097)) == NULL)
    return (0);
  pp->i = pp->line = pp->nb_matches = pp->flag = 0;
  pp->flag2 = 0;
  while (pp->flag2 != 1)
    {
      pp->ia = pp->player = 0;
      if ((pp->i % 2) == 0 && pp->i >= 1)
	extend(pp);
      else if ((pp->i % 2) == 1 && pp->i >= 1)
	ai(pp);
      else
	print_updated_board_game(pp);
      pp->flag2 = verif(pp);
      pp->i++;
    }
  end(pp);
}
