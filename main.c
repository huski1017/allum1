/*
** main.c for Allim1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 10:03:37 2015 Hubert Wroblewski
** Last update Tue Feb 17 15:23:53 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/my.h"

int	ask()
{
  char	*buffer;

  my_putstr("Do you want to select a number of lines ? (y or n)\n");
  buffer = my_read();
  if (buffer[0] == 'y' && buffer[1] == '\n')
    {
      free(buffer);
      return (0);
    }
  else if (buffer[0] == 'n' && buffer[1] == '\n')
    {
      free(buffer);
      return (1);
    }
  free(buffer);
  ask();
  return (-1);
}

int	main()
{
  int	line;

  line = 4;
  my_putstr("\E[H\E[2J");
  if (ask() == 0)
    {
      if ((line = nbr_line()) == -1)
	return (-1);
    }
  return (my_allum(line));
}
