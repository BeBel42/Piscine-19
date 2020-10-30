/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 08:37:55 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/16 17:14:53 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*myassign(int *proxy, int min, int max)
{
	int i;

	i = 0;
	while (i < max - min)
	{
		proxy[i] = min + i;
		i++;
	}
	return (proxy);
}

int			ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *proxy;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	proxy = malloc(size * sizeof(int));
	if (!proxy)
		return (-1);
	*range = myassign(proxy, min, max);
	return (size);
}
