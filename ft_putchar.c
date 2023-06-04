/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marherra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:37:02 by marherra          #+#    #+#             */
/*   Updated: 2023/06/04 15:20:06 by marherra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush02(int x, int y)
{
	int f;
	int c;

	f = 1;
	while (f <= y)
	{
		c = 1;
		while (c <= x)
		{
			if  ((f == 1 ) && (c == 1 || c == x ))
				ft_putchar('A');
			else if ((f == y ) && (c  == 1 || c == x ))
				ft_putchar('C');
			else if (f == 1 || f == y )
				ft_putchar('B');
			else if (c == 1 || c == x )
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		f++;
	}
}
int main()
{
	rush02(5,3);
	return 0;
}
