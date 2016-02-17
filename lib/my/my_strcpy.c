/*
** test.c for test in /home/pera_s/test
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Mon Oct  5 10:59:34 2015 simon pera
** Last update Wed Jan 27 14:08:53 2016 simon pera
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
