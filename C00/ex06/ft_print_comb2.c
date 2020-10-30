/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 16:24:27 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 15:58:35 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	weirdprint(int c)
{
	char c1;
	char c2;

	c1 = 48 + (int)(c / 10);
	c2 = 48 + (c - ((int)(c / 10) * 10));
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 100)
	{
		while (b < 100)
		{
			if (a < b)
			{
				if (a != 0 || b != 1)
					write(1, ", ", 2);
				weirdprint(a);
				write(1, " ", 1);
				weirdprint(b);
			}
			b++;
		}
		b = 0;
		a++;
	}
}
