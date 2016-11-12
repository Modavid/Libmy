/*
** my_strstr.c for  in /home/mod/devc/c04/my_strstr
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Tue Oct 25 18:57:29 2016 MO david
** Last update Tue Oct 25 20:58:36 2016 MO david
*/

#include <stdio.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      if (str[i] == to_find[j])
	{
	  j = 0;
	  k = i;
	  while ((str[k] == to_find [j]) && to_find[j] != '\0')
	    {
	      j++;
	      k++;
	    }
	  if (to_find[j] == '\0')
	      return(str + i);
	}
      i++;
    }
  return ('\0');
}
