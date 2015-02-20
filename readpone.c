/*
** readpone.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 16:15:02 2015 Hubert Wroblewski
** Last update Thu Feb 19 13:41:03 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "my.h"

int	read_pone_pipe(int l, int line, int *pipe)
{
  int	stock;
  char	*buffer;

  my_putstr("Choose the number of pipe (between 1 and 3):\n");
  buffer = my_read();
  stock = my_getnbr(buffer);
  free(buffer);
  if (stock > 0 && stock <= pipe[l] && stock <= 3)
    return (stock);
  my_putstr("Choose an other number of pipe please.\n");
  return (read_pone_pipe(l, line, pipe));
}

int	read_pone_line(int line, int *pipe)
{
  int	stock;
  char	*buffer;

  my_putstr("Choose the line :\n");
  buffer = my_read();
  stock = my_getnbr(buffer);
  free(buffer);
  if (stock > 0 && stock <= line && pipe[stock - 1] > 0)
    return (stock - 1);
  my_putstr("Choose an other line please.\n");
  return (read_pone_line(line, pipe));
}
