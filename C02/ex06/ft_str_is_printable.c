/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefevre <mlefevre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 15:17:04 by mlefevre          #+#    #+#             */
/*   Updated: 2020/09/13 12:08:48 by mlefevre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isprintablechar(char c)
{
	return (c >= 32 && c <= 127);
}

int		ft_str_is_printable(char *str)
{
	int b;

	b = 1;
	while (*str)
	{
		b *= isprintablechar(*str);
		str++;
	}
	return (b);
}
