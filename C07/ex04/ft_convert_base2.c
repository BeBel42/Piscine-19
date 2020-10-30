/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 14:27:45 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/14 17:31:59 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				isvalidbase(const char *base)
{
	int i;
	int j;

	i = -1;
	j = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[++i])
	{
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		j = 0;
	}
	while (*base)
	{
		if (*base == '+' || *base == '-' || *base == ' ' || *base == '\t'
			|| *base == '\n' || *base == '\v' || *base == '\f' || *base == '\r')
			return (0);
		base++;
	}
	return (1);
}

int				isinbase(char c, char *base)
{
	while (*base)
	{
		if (c == *base)
			return (1);
		base++;
	}
	return (0);
}

unsigned int	ndigits(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int				getnumberfromchar(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int				ft_atoi_base(char *str, char *base)
{
	unsigned int	r;
	int				s;

	r = 0;
	s = 1;
	if (!isvalidbase(base))
		return (0);
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n' ||
					*str == '\v' ||
					*str == '\f' ||
					*str == '\r'))
		str++;
	while (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str && isinbase(*str, base))
	{
		r *= ndigits(base);
		r += getnumberfromchar(*str, base);
		str++;
	}
	return (r * s);
}
