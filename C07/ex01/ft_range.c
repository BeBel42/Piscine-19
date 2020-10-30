/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 08:27:06 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/16 17:18:28 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;
	int j;

	if (min >= max)
		return (NULL);
	if (!(arr = malloc(sizeof(int) * (max - min))))
		return (NULL);
	i = min;
	j = 0;
	while (i < max)
	{
		arr[j++] = i++;
	}
	return (arr);
}
