/*
** main.c for  in /home/mex/astekance/Live-Coding-Units-Tests/sort_my_movies
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 07:21:06 2018 MextheGoodGuy
** Last update Wed Apr 11 07:40:54 2018 MextheGoodGuy
*/

#include "sort_my_movies.h"

int	main(void)
{

  for (int i = 0; g_collection[i]; ++i)
    {
      printf("%s\n", g_collection[i]);
    }
  return (0);
}
