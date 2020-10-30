/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 14:33:56 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:06:28 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isnumchar(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_str_is_numeric(char *str)
{
	int b;

	b = 1;
	while (*str)
	{
		b *= isnumchar(*str);
		str++;
	}
	return (b);
}
