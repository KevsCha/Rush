/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:21:12 by marherra          #+#    #+#             */
/*   Updated: 2023/06/04 16:11:26 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void write_line(int x, char a, char b, char c)
{
	int	rep;

	rep = 0;
	while (rep < x)
	{
		if (rep == 0)
			ft_putchar(a);
		else
		{
			if (rep != x -1)
				ft_putchar(b);
			else
				ft_putchar(c);
		}
		rep++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
   if (x <= 0 || y <= 0)
	   return ;
   while (i < y)
   {
	   if (i == 0)
	   {
		   write_line(x, '/', '*', '\\');
	   }
	   else if (i == y - 1)
	   {
		   write_line(x, '\\', '*', '/');
	   }
	   else
		   write_line(x, '*', ' ', '*');
	   i++;
   }
}

int main(void) 
{
	rush(5, 3);
	return (0);
}



