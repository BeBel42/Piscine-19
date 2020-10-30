/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 19:59:37 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/12 12:34:04 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int ib;
	int ie;

	ib = 0;
	ie = size - 1;
	while (ib < ie)
	{
		swap(&tab[ib], &tab[ie]);
		ib++;
		ie--;
	}
}
