/*
** my_swap.c for ex2 in /home/pera_s/Piscine_C_J04
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Thu Oct  1 17:39:40 2015 simon pera
** Last update Tue Feb  2 15:18:48 2016 simon pera
*/

int	my_swap(int *a, int *b)
{
  int	toto;

  toto = *a;
  *a = *b;
  *b = toto;
  return (0);
}
