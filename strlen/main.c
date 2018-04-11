/*
** main.c for  in /home/mex/astekance/Live-Coding-Units-Tests/strlen
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Tue Apr 10 17:40:31 2018 MextheGoodGuy
** Last update Tue Apr 10 17:46:09 2018 MextheGoodGuy
*/

#include <stdio.h>

int	my_strlen(const char* str);

int	main(int ac, const char* const* av)
{
  if (ac < 2)
    return (-1);
  printf("%d\n", my_strlen(av[1]));
  return (0);
}
