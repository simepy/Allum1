/*
** my_revstr.c for ex4 in /home/pera_s/test
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Oct  5 18:04:17 2015 simon pera
** Last update Wed Jan 27 13:56:21 2016 simon pera
*/

char	*my_revstr(char *str)
{
  int	x;
  int	y;
  int	stock;

  stock = 0;
  y = 0;
  x = 0;
  while (str[x] != '\0')
    {
      x = x + 1;
    }
  x = x -1;
  while (x > y)
    {
      stock = str[x];
      str[x] = str[y];
      str[y] = stock;

      x = x - 1;
      y = y + 1;
    }
  return (str);
}
