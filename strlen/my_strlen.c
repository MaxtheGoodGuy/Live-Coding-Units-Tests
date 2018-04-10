/*
** my_strlen.c for  in /home/mex/astekance/LCTU/strlen
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Mon Apr  9 09:51:29 2018 MextheGoodGuy
** Last update Mon Apr  9 11:12:14 2018 MextheGoodGuy
*/

#include <stdio.h>

int	my_strlen(const char* str)
{
  int	i = 0;

  for (; str[i]; ++i);
  return (i);
}
