/*
** my_str_to_wordtab.c for wordtab in /home/pera_s
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Wed Jan 27 17:19:47 2016 simon pera
** Last update Wed Jan 27 17:28:04 2016 simon pera
*/

#include <stdlib.h>
#include <unistd.h>
#include "../../include/my.h"

char            **str(char *av, int size)
{
  t_intel       *intel;

  intel = malloc(sizeof(t_intel));
  if ((intel->result = malloc(sizeof(char *) * 4096)) == NULL)
    return (0);
  if ((intel->result[intel->j] = malloc(sizeof(char) * 4096)) == NULL)
    exit(0);
  intel->i = intel->j = intel->nbrtmp = 0;
  while (intel->i != size)
    {
      if (av[intel->i] != '\n')
	intel->result[intel->j][intel->nbrtmp++] = av[intel->i];
      intel->i++;
      if (av[intel->i] == ' ' || av[intel->i] == '\t')
	{
	  intel->result[intel->j][intel->nbrtmp] = '\0';
	  intel->i++;
	  intel->j++;
	  intel->nbrtmp = 0;
	  if ((intel->result[intel->j] = malloc(sizeof(char) * 4096)) == NULL)
	    exit(1);
	}
    }
  intel->result[++intel->j] = NULL;
  return (intel->result);
}
