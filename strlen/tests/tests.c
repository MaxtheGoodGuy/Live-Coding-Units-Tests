/*
** tests.c for  in /home/mex/astekance/LCTU/strlen
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Mon Apr  9 11:13:09 2018 MextheGoodGuy
** Last update Wed Apr 11 10:20:02 2018 MextheGoodGuy
*/

#include <signal.h>
#include <string.h>
#include <criterion/criterion.h>

int	my_strlen(const char* str);

Test(my_strlen, return_value)
{
  cr_assert_eq(my_strlen("Hello"), 5);
  cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen, strlen_cmp)
{
  cr_assert_eq(my_strlen("Hello"), strlen("Hello"));
}

Test(my_strlen, segfault)
{
  cr_assert_eq(my_strlen(NULL), 0);
}
