/*
** my_strlen.c for  in /home/mod/devc/c03/my_strlen
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Thu Oct 20 10:41:07 2016 MO david
** Last update Thu Oct 20 10:59:19 2016 MO david
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}
