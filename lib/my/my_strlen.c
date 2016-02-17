/*
** my_strlen.c for ex3 in /home/pera_s/piscine/Piscine_C_J07/lib/my
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Wed Oct 14 17:00:20 2015 simon pera
** Last update Wed Jan 27 14:13:34 2016 simon pera
*/

int	my_strlen(char *str)
{
  int	c;

  c = 0;
  while (str[c] != '\0')
    {
      c = c  +  1;
    }
  return (c);
}
