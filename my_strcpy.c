/*
** my_strcpy.c for  in /home/mod/devc/c04/my_strcpy
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Fri Oct 21 10:02:26 2016 MO david
** Last update Tue Oct 25 21:41:48 2016 MO david
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
    dest[i] = src[i];
    i++;
    }
  dest[i] = '\0';
  return(dest);
}
