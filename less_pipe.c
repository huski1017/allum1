/*
** less_pipe.c for Allum1 in /home/wroble_h/rendu/Allum1
** 
** Made by Hubert Wroblewski
** Login   <wroble_h@epitech.net>
** 
** Started on  Tue Feb 10 10:41:48 2015 Hubert Wroblewski
** Last update Thu Feb 19 13:39:51 2015 Hubert Wroblewski
*/

#include "my.h"

int	*less_pipe(int *pipe, int l, int nb)
{
  pipe[l] = pipe[l] - nb;
  return (pipe);
}
