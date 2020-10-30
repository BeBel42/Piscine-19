/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/25 16:15:33 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/25 16:27:47 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			mypow(int b, int e)
{
	if (e == 0)
		return (1);
	return (b * mypow(b, e - 1));
}

void		myputnbr(int unb, int n)
{
	char c;

	if (unb < 10 && n == 1)
	{
		c = '0' + unb;
		write(1, &c, 1);
	}
	else
	{
		myputnbr(unb / 10, n - 1);
		c = '0' + (unb % 10);
		write(1, &c, 1);
	}
}

int			isascending(int c, int n)
{
	int i;
	int j;
	int k;

	k = -1;
	while (++k < n - 1)
	{
		i = c % 10;
		c /= 10;
		j = c % 10;
		if (j >= i)
			return (0);
	}
	return (1);
}

int			getlastnum(int n)
{
	int u;
	int r;

	u = 10 - n;
	r = 0;
	while (u < 10)
	{
		r *= 10;
		r += u;
		u++;
	}
	return (r);
}

void		ft_print_combn(int n)
{
	const int		lastnum = getlastnum(n);
	const int		max = mypow(10, n);
	register int	c;

	if (n == 9)
	{
		write(1, "012345678, 012345679, "
		"012345689, 012345789, 012346789, "
		"012356789, 012456789, 013456789, "
		"023456789, 123456789", 9 * 10 + 9 * 2);
		return ;
	}
	c = 0;
	while (c < max)
	{
		if (isascending(c, n))
		{
			myputnbr(c, n);
			if (c != lastnum)
				write(1, ", ", 2);
		}
		c++;
	}
}
