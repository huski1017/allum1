/*
** my_read.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Mon Feb  9 16:23:32 2015 Hubert Wroblewski
** Last update Mon Feb  9 16:54:42 2015 Hubert Wroblewski
*/

#include <stdlib.h>
#include "include/my.h"

char	*my_read()
{
  char	*buffer;
  int	rad;
  
  if ((buffer = malloc(4096 * sizeof(char))) == NULL)
    {
      my_putstr("Error : malloc failed.\n");
      exit(1);
    }
  if ((rad = read(0, buffer, 4096)) == -1)
    {
      my_putstr("Error : read failed.\n");
      exit(1);
    }
  return (buffer);
}
