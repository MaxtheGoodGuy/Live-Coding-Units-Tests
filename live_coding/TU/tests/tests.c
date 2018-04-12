/*
** tests.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TU
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 10:46:32 2018 MextheGoodGuy
** Last update Thu Apr 12 18:47:24 2018 MextheGoodGuy
*/

#include <string.h>
#include <criterion/criterion.h>
#include "my_strlen.h"

Test(my_strlen, return_value)
{
  cr_assert_eq(my_strlen("lel"), 3);
}

Test(my_strlen, strlen)
{
  cr_assert_eq(my_strlen("TPB"), strlen("TPB"));
}
