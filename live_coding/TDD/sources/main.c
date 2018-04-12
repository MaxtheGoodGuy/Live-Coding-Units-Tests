/*
** main.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TDD
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 08:11:20 2018 MextheGoodGuy
** Last update Thu Apr 12 18:47:59 2018 MextheGoodGuy
*/

#include <stdio.h>
#include "my_collection.h"

int	main(void)
{
  printf(RED "Testing my_collection \"by Hands\"\n============================\n" RESET);
  printf(BLUE "Test 1 : empty_name\n" RESET);
  printf(GREEN "expected value -> (null)\n" RESET);
  printf(GREEN "obtained value -> %s\n"RESET, find_by_title(NULL, g_collection));
  printf(BLUE "Test 2 : empty_collection\n" RESET);
  printf(GREEN "expected value -> (null)\n" RESET);
  printf(GREEN "obtained value -> %s\n" RESET, find_by_title("The Flash", NULL));
  printf(BLUE "Test 3 : display_film\n" RESET);
  printf(GREEN "expected value -> Inception\n" RESET);
  printf(GREEN "obtained value -> " RESET);
  display_film("Inception", g_collection);
  printf("\n");
  return (0);
}
