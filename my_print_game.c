/*
** my_print_game.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 13:43:19 2015 Hubert Wroblewski
** Last update Tue Feb 17 14:31:10 2015 Hubert Wroblewski
*/

#include "include/my.h"

void	my_print_pipe(int nbpipe)
{
  while (nbpipe > 0)
    {
      my_putstr("|");
      nbpipe--;
    }
}

void	my_print_space(int line, int nbline)
{
  int	i;
  int	cnt;

  cnt = 0;
  i = nbline - line;
  while (cnt < i)
    {
      my_putstr(" ");
      cnt++;
    }
}

void	my_print_game(int *line, int nbline)
{
  int	i;

  i = 0;
  while (i < nbline)
    {
      my_print_space(i, nbline - 1);
      my_print_pipe(line[i]);
      my_putstr("\n");
      i++;
    }
}
