/*
** strcmp.c for ex6 in /home/pera_s/test
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Tue Oct  6 13:55:25 2015 simon pera
** Last update Wed Jan 27 14:16:54 2016 simon pera
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	y;
  int	x;
  int	i;
  int	cal;

  cal = 0;
  x = 0;
  i = 0;
  y = 0;
  while (y <= n)
    {
      cal = s1[i] - s2[x];
      if ((x || i) == '\0')
	{
	  return (0);
	}
      i = i + 1;
      x = x + 1;
      n = n = 1;
    }
  return (cal);
}
