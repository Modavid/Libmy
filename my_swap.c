/*
** my_swap.c for  in /home/mod/devc/c03/my_swap
** 
** Made by MO david
** Login   <mo_d@etna-alternance.net>
** 
** Started on  Thu Oct 20 11:20:23 2016 MO david
** Last update Wed Oct 26 16:59:27 2016 MO david
*/

void	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
