/*
** my_collection.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TDD
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 08:11:27 2018 MextheGoodGuy
** Last update Thu Apr 12 18:49:05 2018 MextheGoodGuy
*/

#include <string.h>
#include "my_collection.h"

const char* g_collection[5] = {"The Empire Strikes Back",
			       "Submarine",
			       "The Wind Rises",
			       "Inception",
			       "The Flash"};

const char* find_by_title(const char* title, const char * const* collection)
{
  if (!title)
    return (NULL);
  if (!collection)
    return (NULL);
  return ("nope");
}

void	display_film(const char* title, const char * const* collection)
{
  for (unsigned int i = 0; i < sizeof(g_collection) / sizeof(char*); ++i)
    {
      if (!strcmp(collection[i], title))
	printf("%s\n", title);
    }
}
