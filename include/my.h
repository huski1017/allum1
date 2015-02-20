/*
** my.h for Allum1 in /home/wroble_h/rendu/Allum1/include
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 16:44:59 2015 Hubert Wroblewski
** Last update Fri Feb 20 14:43:14 2015 Hubert Wroblewski
*/

#ifndef MY_H_
# define MY_H_

typedef struct	s_allum
{
  int	*pipe;
  int	rest;
  int	l;
  int	nb;
  int	rast;
  int	line;
  int	stop;
}		t_allum;

int	main();
int	ask();
int	cnt(int *, int);
int	my_allum(int);
void	my_print_pipe(int);
void	my_print_space(int, int);
void	my_print_game(int *, int);
char	*my_read();
int	read_pone_line(int, int *);
int	my_getnbr(char *);
int	my_strlen(char *);
void	my_putstr(char *);
int	*stck_pipe(int *, int);
int	read_pone_pipe(int, int, int *);
int	*less_pipe(int *, int, int);
int	*my_ia(int *, int, int);
void	win_lose(int);
int	nbr_line();

#endif /*!MY_H_ */
