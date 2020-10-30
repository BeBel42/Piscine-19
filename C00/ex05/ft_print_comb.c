/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:10:05 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 15:58:45 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	myprint(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a < 10)
	{
		while (b < 10)
		{
			while (c < 10)
			{
				if (a < b && b < c)
				{
					myprint(48 + a, 48 + b, 48 + c);
				}
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
