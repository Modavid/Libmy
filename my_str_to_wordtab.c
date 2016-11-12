/*
** my_str_towordtab.c for  in /home/mod/devc/c07/my_str_to_wordtab
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Mon Oct 24 16:21:10 2016 MO david
** Last update Tue Oct 25 17:44:22 2016 MO david
*/

#include <stdlib.h>

int	my_str_to_line(int i, int compt, char *str)
{
  while (str[i] != '\0')
    {
      if ((str[i] >= '0' && str[i] <= '9') ||
	  (str[i] >= 'A' && str[i] <= 'Z') ||
	  (str[i] >= 'a' && str[i] <= 'z'))
	if (str[i + 1] < '0' || (str[i + 1] > '9' && str[i + 1] < 'A') ||
	    (str[i + 1] > 'Z' && str[i + 1] < 'a') || str[i] > 'z')
	  compt++;
      i++;
    }
  return (compt);
}

char	**my_str_to_column(char **tab, int j, int compt, char *str)
{
  int	i;
  
  i = 0;
  while (str[i] != '\0')
    {
      compt = 0;
      while (((str[i] >= '0' && str[i] <= '9') ||
	      (str[i] >= 'A' && str[i] <= 'Z') ||
	      (str[i] >= 'a' && str[i] <= 'z')) && (str[i] != '\0'))
	{
	  compt++;
	  i++;
	}
      while (((str[i] > '9' && str[i] < 'A') ||
	      (str[i] > 'Z' && str[i] < 'a') ||
	      str[i] < '0' || str[i] > 'z' ) && (str[i] != '\0'))
	i++;
      if (compt != 0)
	{
	  tab[j] = malloc(compt * sizeof(char) + 1);
	  j++;
	}
    }
  return(tab);
}

char	**my_str_to_fill(char **tab, int i, int compt, char *str)
{
  int	j;

  while (str[i] != '\0')
    {
      j = 0;
      while ((str[i] < '0' || (str[i] > '9' && str[i] < 'A') ||
	      (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z') &&
	     (str[i] != '\0'))
	i++;
      while (((str[i] != '\0') &&str[i] >= '0' && str[i] <= '9') ||
	     (str[i] >= 'A' && str[i] <= 'Z') ||
	     (str[i] >= 'a' && str[i] <= 'z'))
	{
	  tab[compt][j] = str[i];
	  j++;
	  i++;
	}
      if (j != 0)
	{
	  tab[compt][j] = '\0';
	  compt++;
	}
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	compt;

  i = 0;
  j = 0;
  compt = 0;
  if (str == (NULL))
    return(NULL);
  compt = my_str_to_line(i, compt, str);
  tab = malloc(compt * sizeof(char *) + 1);
  if (tab == NULL)
    return(NULL);
  tab[compt] = NULL; 
  compt = 0;
  tab = my_str_to_column(tab, j, compt, str);
  if (tab == NULL)
    return(NULL);
  tab = my_str_to_fill(tab, i, compt, str);
  if (tab == NULL)
    return(NULL);
  return (tab);
}
