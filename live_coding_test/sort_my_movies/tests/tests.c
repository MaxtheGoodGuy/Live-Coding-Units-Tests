/*
** tests.c for  in /home/mex/astekance/LCTU/strlen
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Mon Apr  9 11:13:09 2018 MextheGoodGuy
** Last update Wed Apr 11 08:14:09 2018 MextheGoodGuy
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "sort_my_movies.h"

void	redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

Test(sort_my_movies, empty_name)
{
  cr_assert_eq(find_by_title(NULL, g_collection), NULL);
}

Test(sort_my_movies, empty_list)
{
  cr_assert_eq(find_by_title("Lol", NULL), NULL);
}

Test(sort_my_movies, find_film)
{
  cr_assert_eq(find_by_title("Submarine", g_collection), "Submarine");
}

Test(sort_my_movies, fail_find_film)
{
  cr_assert_str_eq(find_by_title("La tour montparnasse infernale", g_collection), "nope");
}

Test(sort_my_movies, display_collection_no_film, .init = redirect_all_std)
{
  display_film(NULL, g_collection);
  fflush(stdout);
  cr_assert_stdout_eq_str("!film_name\n");
}

Test(sort_my_movies, display_collection_no_collec, .init = redirect_all_std)
{
  display_film("Logan", NULL);
  fflush(stdout);
  cr_assert_stdout_eq_str("!collection\n");
}

Test(sort_my_movies, display_collection, .init = redirect_all_std)
{
  display_film("Logan", g_collection);
  fflush(stdout);
  cr_assert_stdout_eq_str("Logan\n");
}
