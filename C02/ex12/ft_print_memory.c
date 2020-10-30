/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 12:36:44 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/23 18:49:45 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned long	mypow(unsigned long n, unsigned long p)
{
	if (p == 0)
		return (1);
	return (mypow(n, p - 1) * n);
}

void			printptr(void *ptr)
{
	const char		*base = "0123456789abcdef";
	char			c;
	int				i;
	unsigned long	nb;

	nb = (unsigned long)ptr;
	i = 0;
	while (i < 16)
	{
		c = base[(nb / mypow(16, 15 - i)) % 16];
		write(1, &c, 1);
		i++;
	}
}

unsigned int	g_count = 0;

void			loops(unsigned char *ptr, unsigned int *i,
const unsigned int range, const char *base)
{
	while (++(*i) < range && *i < 16)
	{
		if (!(*i % 2))
			write(1, " ", 1);
		write(1, &base[ptr[*i] / 16], 1);
		write(1, &base[ptr[*i] % 16], 1);
	}
	g_count += *i;
	while (*i < 16)
	{
		if (!(*i % 2))
			write(1, " ", 1);
		write(1, " ", 1);
		write(1, " ", 1);
		(*i)++;
	}
}

unsigned char	*printchar(unsigned char *ptr, unsigned int size)
{
	const char			*base = "0123456789abcdef";
	unsigned int		i;
	const unsigned int	range = size - g_count;

	i = -1;
	loops(ptr, &i, range, base);
	i = -1;
	write(1, " ", 1);
	while (++i < range && i < 16)
	{
		if (*ptr >= 32 && *ptr <= 127)
			write(1, ptr++, 1);
		else
		{
			write(1, ".", 1);
			ptr++;
		}
	}
	return (ptr);
}

void			*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char *ptr;

	if (!size)
		return (addr);
	ptr = addr;
	while (g_count < size)
	{
		printptr(ptr);
		write(1, ":", 1);
		ptr = printchar(ptr, size);
		write(1, "\n", 1);
	}
	return (addr);
}
