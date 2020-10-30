/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 08:45:00 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/15 14:45:36 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	const int original = nb;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (--power)
		nb *= original;
	return (nb);
}
