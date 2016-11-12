/*
** my_strncpy.c for  in /home/mod/devc/c04/my_strncpy
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 10:25:31 2016 MO david
** Last update Fri Oct 21 16:29:51 2016 MO david
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i != n)
    {
      if (src[i] != '\0')
	dest[i] = src[i];
      else if (src[i] == '\0') 
	dest[i] = '\0';
      i++;
    } 
  return (dest);
}
