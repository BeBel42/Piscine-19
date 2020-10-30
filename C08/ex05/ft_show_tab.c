/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 10:30:20 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/17 12:56:12 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	myprintstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	myprintnumber(int nb)
{
	char c;

	if (nb < 10)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	else
	{
		myprintnumber(nb / 10);
		c = '0' + (nb % 10);
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str)
	{
		myprintstr(par[i].str);
		write(1, "\n", 1);
		myprintnumber(par[i].size);
		write(1, "\n", 1);
		myprintstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
