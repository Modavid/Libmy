/*
** my_strcat.c for  in /home/mod/devc/c04/my_strcat
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 17:56:08 2016 MO david
** Last update Fri Oct 21 19:32:18 2016 MO david
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;
  
  j = 0;
  i = 0;
  while (dest[i] != '\0')
    i++;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
