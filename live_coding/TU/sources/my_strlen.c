/*
** my_strlen.c for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TU
** 
** Made by MextheGoodGuy
** Login   <maximilien.oteifeh-pfennig@epitech.eu>
** 
** Started on  Wed Apr 11 10:44:55 2018 MextheGoodGuy
** Last update Wed Apr 11 10:46:23 2018 MextheGoodGuy
*/

int	my_strlen(const char* str)
{
  int	i;

  for (i = 0; str[i]; ++i);
  return (i);
}
