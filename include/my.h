/*
** my.h for ex2 in /home/pera_s/Piscine_C_J09/include
**
** Made by simon pera
** Login   <pera_s@epitech.net>
**
** Started on  Fri Oct  9 14:37:12 2015 simon pera
** Last update Thu Feb 18 00:00:16 2016 simon pera
*/

#ifndef MY_H_
# define MY_H_

typedef struct s_intel
{
  int   i;
  int   j;
  char  **result;
  int   nbrtmp;
}		t_intel;

typedef struct	s_pp
{
  char  **tab;
  int   toto;
  int   rap;
  int   i;
  int   z;
  int   li;
  int	line;
  int	nb_matches;
  char  *buf;
  int   a;
  int	flag;
}		t_pp;

void	my_putchar(char);
int	my_put_nbr(int);
int	my_swap(int, int);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
int	my_power_rec(int, int);
char	*my_strcpy(char, char);
char	*my_strncpy(char *, char *, int);
char	*my_revstr(char *);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	**my_str_to_wordtab(char *, int );
int     extend(t_pp *);
void    print_updated_board_game(t_pp *);
void    verif(t_pp *);
void    ai(t_pp *);
void    tab_maxi(int, char **, int, int);
void	up_down(int );

#endif /* MY_H_ */