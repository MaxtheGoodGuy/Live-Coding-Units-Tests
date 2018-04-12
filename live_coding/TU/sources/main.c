/*
** main.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TU
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Thu Apr 12 18:09:41 2018 MextheGoodGuy
** Last update Thu Apr 12 18:39:57 2018 MextheGoodGuy
*/

#include <string.h>
#include <stdio.h>
#include "my_strlen.h"

int	main(void)
{
  printf(RED "Testing my_strlen \"by Hands\"\n============================\n" RESET);
  printf(BLUE "Test 1 : return value\n" RESET);
  printf(GREEN "expected value -> %d\n" RESET, 5);
  printf(GREEN "obtained value -> %d\n"RESET, my_strlen("Hello"));
  printf(BLUE "Test 2 : strlen comparison\n" RESET);
  printf(GREEN "expected value -> %ld\n" RESET, strlen("Hello World!"));
  printf(GREEN "obtained value -> %d\n\n" RESET, my_strlen("Hello World!"));
  return (0);
}
