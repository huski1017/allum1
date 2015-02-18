/*
** nbr_line.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 10:16:59 2015 Hubert Wroblewski
** Last update Tue Feb 17 15:23:16 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/my.h"

int	nbr_line()
{
  char	*buffer;
  int	line;

  my_putstr("Choose a number of line between 2 and 50 :\n");
  buffer = my_read();
  line = my_getnbr(buffer);
  free(buffer);
  if (line >= 2 && line <= 50)
    return (line);
  my_putstr("Do you know how to count ?\nPlease try again !\n");
  return (nbr_line());
}
