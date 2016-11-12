/*
** my_strdup.c for  in /home/mod/devc/c07/my_strdup
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Mon Oct 24 14:20:21 2016 MO david
** Last update Mon Oct 24 15:46:09 2016 MO david
*/

#include <stdlib.h>

char	*my_strdup(char *str)
{
  char	*new;
  int	i;

  i = 0;
  new = malloc(sizeof(*str));
  while (new == 0)
    new = malloc(sizeof(*str));
  while (str[i] != '\0')
    {
      new[i] = str[i];
      i++;
    }
  return (new);
}
