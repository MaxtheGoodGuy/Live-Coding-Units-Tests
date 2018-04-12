/*
** sort_my_movies.h for  in /home/mex/astekance/Live-Coding-Units-Tests/sort_my_movies
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Tue Apr 10 17:56:49 2018 MextheGoodGuy
** Last update Wed Apr 11 08:01:53 2018 MextheGoodGuy
*/

#ifndef SORT_MY_MOVIES_H_
# define SORT_MY_MOVIES_H_

#include <stdio.h>

const char*	find_by_title(const char* film_name, const char * const* collection);

void		display_film(const char* film_name, const char * const* collection);

extern const char* g_collection[5];

#endif /* !SORT_MY_MOVIES_H_ */
