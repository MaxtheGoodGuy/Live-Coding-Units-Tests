/*
** tests.c for  in /home/mex/astekance/LCTU/strlen
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Mon Apr  9 11:13:09 2018 MextheGoodGuy
** Last update Wed Apr 11 07:23:48 2018 MextheGoodGuy
*/

#include <criterion/criterion.h>
#include "sort_my_movies.h"

Test(sort_my_movies, empty_list)
{
  cr_assert_eq(find_by_title("Lol", NULL), NULL, "mdr");
}
