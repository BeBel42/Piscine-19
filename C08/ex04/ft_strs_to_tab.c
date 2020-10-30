/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 09:44:06 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/17 13:42:00 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					mystrlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*allocatestr(char *str)
{
	int		i;
	char	*r;

	if (!(r = malloc(mystrlen(str) + 1)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		r[i] = str[i];
		i++;
	}
	r[i] = 0;
	return (r);
}

t_stock_str			newobject(int size, char *str, char *copy)
{
	t_stock_str r;

	r.size = size;
	r.str = str;
	r.copy = copy;
	return (r);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*r;
	char			*c;

	if (!(r = malloc((ac + 1) * sizeof(t_stock_str))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (!(c = allocatestr(av[i])))
			return (NULL);
		r[i] = newobject(mystrlen(av[i]), av[i], c);
		i++;
	}
	r[ac] = newobject(0, 0, 0);
	return (r);
}
