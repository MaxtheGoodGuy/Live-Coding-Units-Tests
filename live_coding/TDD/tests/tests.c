/*
** tests.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TDD
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 08:11:15 2018 MextheGoodGuy
** Last update Thu Apr 12 11:33:50 2018 MextheGoodGuy
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_collection.h"

void	redirect_all_std(void)
{
  cr_redirect_stdout();
  cr_redirect_stderr();
}

Test(my_collection, empty_names)
{
  cr_assert_eq(find_by_title(NULL, g_collection), NULL);
}

Test(my_collection, empty_collection)
{
  cr_assert_eq(find_by_title("L", NULL), NULL);
}

Test(my_collection, display_film, .init = redirect_all_std)
{
  display_film("Inception", g_collection);
  fflush(stdout);
  cr_assert_stdout_eq_str("Inception\n");
}

