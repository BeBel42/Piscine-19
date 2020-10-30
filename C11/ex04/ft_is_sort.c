/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 14:50:27 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/22 15:56:00 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int b;

	b = 1;
	i = -1;
	while (++i < length - 1)
		b *= (f(tab[i], tab[i + 1]) <= 0);
	if (b)
		return (1);
	b = 1;
	i = -1;
	while (++i < length - 1)
		b *= (f(tab[i], tab[i + 1]) >= 0);
	if (b)
		return (1);
	return (0);
}
