/*
** sort_my_movies.c for  in /home/mex/astekance/Live-Coding-Units-Tests/sort_my_movies
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Tue Apr 10 18:02:59 2018 MextheGoodGuy
** Last update Wed Apr 11 08:13:08 2018 MextheGoodGuy
*/

#include <string.h>
#include "sort_my_movies.h"

const char* g_collection[5] = {"The Empire Strikes Back",
                             "Rogue One",
                             "Submarine",
                             "The Wind Rises",
                             "Logan"};

const char*	find_by_title(const char* film_name, const char * const* collection)
{
  if (!film_name)
    return (NULL);
  if (!collection)
    return (NULL);
  for (int i = 0; collection[i]; ++i)
    {
      if (!strcmp(collection[i], film_name))
	return (film_name);
    }
  return ("nope");
}

void	display_film(const char* film_name, const char* const* collection)
{
  if (!film_name)
    {
      printf("!film_name\n");
    return;
    }
  if (!collection)
    {
      printf("!collection");
      return;
    }
  for (int i = 0; collection[i]; ++i)
    {
      if (!strcmp(collection[i], film_name))
	printf("%s\n", film_name);
    }
}
