/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:34:51 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/14 17:12:07 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				isvalidbase(const char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	while (*base)
	{
		if (*base == '+' || *base == '-')
			return (0);
		base++;
	}
	return (1);
}

unsigned int	ndigits(const char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

char			inttochar(unsigned int unb, const char *base)
{
	return (base[unb]);
}

void			printnumber(int nb, const char *base)
{
	unsigned int		unb;
	unsigned int		basedigits;
	char				c;

	basedigits = ndigits(base);
	if (nb < 0)
	{
		write(1, "-", 1);
		unb = -nb;
	}
	else
		unb = nb;
	if (unb < basedigits)
	{
		c = inttochar(unb, base);
		write(1, &c, 1);
	}
	else
	{
		printnumber(unb / basedigits, base);
		c = inttochar(unb % basedigits, base);
		write(1, &c, 1);
	}
}

void			ft_putnbr_base(int nbr, char *base)
{
	if (!isvalidbase(base))
		return ;
	printnumber(nbr, base);
}
