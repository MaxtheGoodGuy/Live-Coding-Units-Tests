/*
** sort_my_movies.h for  in /home/mex/astekance/Live-Coding-Units-Tests/sort_my_movies
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Tue Apr 10 17:56:49 2018 MextheGoodGuy
** Last update Thu Apr 12 18:27:47 2018 MextheGoodGuy
*/

#ifndef MY_COLLECTION_H_
# define MY_COLLECTION_H_

#include <stdio.h>

# define RED    "\x1b[31m"
# define GREEN  "\x1b[32m"
# define BLUE   "\x1b[36m"
# define RESET  "\x1b[0m"

const char*	find_by_title(const char* title, const char * const* collection);

void		display_film(const char* title, const char * const* collection);

extern const char* g_collection[5];

#endif /* !MY_COLLECTION_H_ */
