/*
** my_strncat.c for  in /home/mod/devc/c04/my_strncat
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 20:25:04 2016 MO david
** Last update Tue Oct 25 18:51:48 2016 MO david
*/

char	*my_strncat(char *dest, char *src, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while(dest[i] != '\0')
    i++;
  while ((j != n) && (src[j] != '\0'))
    {
      dest[i] = src [j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
