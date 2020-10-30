/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:28:58 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/17 15:24:51 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int r;

	if (nb < 1)
		return (0);
	r = 1;
	while (r * r < (unsigned int)nb)
		r++;
	if (r * r == (unsigned int)nb)
		return (r);
	else
		return (0);
}
