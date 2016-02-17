/*
** my_putstr.c for ex" in /home/pera_s/Piscine_C_J04
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Thu Oct  1 20:16:04 2015 simon pera
** Last update Mon Feb  1 20:27:28 2016 simon pera
*/

#include <unistd.h>
#include "../../include/my.h"

int	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
