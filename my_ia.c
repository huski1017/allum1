/*
** my_ia.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Feb 10 11:15:10 2015 Hubert Wroblewski
** Last update Thu Feb 19 13:40:01 2015 Hubert Wroblewski
*/

#include "my.h"

int	*my_ia(int *pipe, int rest, int l)
{
  int	i;
  int	nb;

  nb = 0;
  if (rest > 0)
    {
      i = rest % 4;
      if (i == 0)
	i = 2;
      if ((i == rest && rest > 1) || (rest - i) == 4)
	i--;
      while (nb < l)
	{
	  if (i <= pipe[nb])
	    {
	      pipe[nb] = pipe[nb] - i;
	      return (pipe);
	    }
	  nb++;
	}
    }
  return (pipe);
}
