/*
** my_strncmp.c for  in /home/mod/devc/c04/my_strncmp
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 17:14:25 2016 MO david
** Last update Fri Oct 21 17:41:45 2016 MO david
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (i != n)
    {
      if (s1[i] > s2[i])
	return (1);
      else if (s2[i] > s1[i])
	return (-1);
      i++;
    }
  return (0);
}
