/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 08:50:46 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/24 09:59:25 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_atoi_base(char *str, char *base);
int				isvalidbase(const char *base);
unsigned int	ndigits(char *base);

unsigned int	numtomalloc(int nb, char *base_to)
{
	unsigned int r;
	unsigned int unb;

	if (nb == 0)
		return (1);
	r = 0;
	unb = nb;
	if (nb < 0)
	{
		unb = -nb;
		r++;
	}
	while (unb)
	{
		unb /= ndigits(base_to);
		r++;
	}
	return (r);
}

unsigned int g_count = 0;

char			*myputnbrbase(unsigned int unb, char *base_to, char *r)
{
	if (unb < ndigits(base_to))
	{
		r[g_count] = base_to[unb];
		g_count++;
	}
	else
	{
		myputnbrbase(unb / ndigits(base_to), base_to, r);
		r[g_count] = base_to[unb % ndigits(base_to)];
		g_count++;
	}
	return (r);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				nb;
	char			*r;
	unsigned int	unb;

	g_count = 0;
	if (!isvalidbase(base_from) || !isvalidbase(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	if (!(r = malloc(numtomalloc(nb, base_to) + 1)))
		return (0);
	r[numtomalloc(nb, base_to)] = 0;
	unb = nb;
	if (nb < 0)
	{
		unb = -nb;
		r[0] = '-';
		g_count++;
	}
	return (myputnbrbase(unb, base_to, r));
}
