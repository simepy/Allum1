/*
** my_strncpy.c for ex3 in /home/pera_s/test
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Oct  5 15:08:18 2015 simon pera
** Last update Wed Jan 27 14:17:42 2016 simon pera
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i];
      if (n > i)
	{
	  dest[i] = src[i];
	}
      i = i + 1;
    }
  return (dest);
}
