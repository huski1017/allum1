/*
** my_allum.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 11:30:09 2015 Hubert Wroblewski
** Last update Tue Feb 17 14:33:44 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/my.h"

int	cnt(int *pipe, int line)
{
  int	i;
  int	cnt;

  cnt = 0;
  i = 0;
  while (cnt < line)
    {
      i = i + pipe[cnt];
      cnt++;
    }
  return (i);
}

int	*stck_pipe(int *pipe, int line)
{
  int	i;
  int	nb;

  i = 0;
  nb = 1;
  while (i <= line - 1)
    {
      pipe[i] = nb;
      nb = nb + 2;
      i++;
    }
  return (pipe);
}

void	win_lose(int res)
{
  if (res == 2)
    my_putstr("You win !\n");
  else
    my_putstr("You lose !\n");
}

int		my_allum(int line)
{
  t_list	l;

  if ((l.pipe = malloc(line * sizeof(int))) == NULL)
    return (-1);
  l.line = line;
  l.pipe = stck_pipe(l.pipe, l.line);
  l.stop = 0;
  while (l.stop == 0)
    {
      my_print_game(l.pipe, l.line);
      l.l = read_pone_line(l.line, l.pipe);
      l.nb = read_pone_pipe(l.l, l.line, l.pipe);
      l.pipe = less_pipe(l.pipe, l.l, l.nb);
      my_putstr("\E[H\E[2J");
      my_putstr("Your turn :\n");
      if ((l.rest = cnt(l.pipe, l.line)) == 0)
	l.stop = 1;
      my_print_game(l.pipe, l.line);
      my_putstr("IA's turn :\n");
      l.pipe = my_ia(l.pipe, l.rest, l.line);
      if ((l.rast = cnt(l.pipe, l.line)) == 0 && l.stop == 0)
	l.stop = 2;
    }
  win_lose(l.stop);
  free(l.pipe);
  return (0);
}
