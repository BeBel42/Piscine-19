/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 13:58:01 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/30 15:16:15 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_count = 0;
int		g_queens[10] = {
	-1000, -1000, -1000, -1000, -1000,
	-1000, -1000, -1000, -1000, -1000
};

void	print_result(void)
{
	int		x;
	char	c;

	g_count++;
	x = -1;
	while (++x < 10)
	{
		c = g_queens[x] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}

int		myabs(int x)
{
	if (x < 0)
		x *= -1;
	return (x);
}

int		is_possible(void)
{
	int x;
	int x2;
	int y;
	int b;

	y = -1;
	while (++y < 10)
	{
		b = 0;
		x = -1;
		while (++x < 10)
			if (b && g_queens[x] == y)
				return (0);
			else if (g_queens[x] == y)
				b = 1;
	}
	x = -1;
	while (++x < 10)
	{
		x2 = x;
		while (++x2 < 10)
			if (myabs(g_queens[x2] - g_queens[x]) == (x2 - x))
				return (0);
	}
	return (1);
}

void	find(int i)
{
	int j;

	if (i == 10)
		return (print_result());
	j = -1;
	while (++j < 10)
	{
		g_queens[i] = j;
		if (is_possible())
			find(i + 1);
		g_queens[i] = -1000;
	}
}

int		ft_ten_queens_puzzle(void)
{
	find(0);
	return (g_count);
}
