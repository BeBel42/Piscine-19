/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 08:58:57 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/23 18:46:05 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				isprintable(char c)
{
	return (c >= 32 && c <= 127);
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

void			ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (isprintable(*str))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			if ((unsigned char)*str < 16)
				write(1, "0", 1);
			printnumber((unsigned char)*str, "0123456789abcdef");
		}
		str++;
	}
}
